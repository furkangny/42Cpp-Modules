/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 03:31:05 by fgunay            #+#    #+#             */
/*   Updated: 2024/08/04 03:31:06 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int Replace::ft_strlen(char *s)
{
	int i = 0;
	while (s[i])
		i++;
	return i;
}

void Replace::fileCopy(std::string filee, std::string s1, std::string s2)
{
	const char *file_cstr = filee.c_str();

	std::ifstream file(file_cstr);
	std::ofstream fileRep((filee + ".replace").c_str());

	if (!file.is_open())
	{
		std::cerr << "file cannot be opened, probably no such file" << std::endl;
		return;
	}

	if (!fileRep.is_open())
	{
		std::cerr << "file.replace cannot be opened" << std::endl;
		return;
	}

	if (file.peek() == EOF)
	{
		std::cerr << "file exists, but empty" << std::endl;
		return;
	}

	std::string line;
	bool isExtant = false;
	while (std::getline(file, line))
	{
		if (line.find(s1) != std::string::npos)
		{
			isExtant = true;
			break;
		}
	}

	if (!isExtant)
	{
		std::cerr << "file exists, but does not contain the string" << std::endl;
		return;
	}

	file.clear();

	file.seekg(0, std::ios::beg);

        line = "";
        while (std::getline(file, line))
        {
            std::size_t pos = line.find(s1);
   
            while (pos != std::string::npos)
            {
                fileRep << line.substr(0, pos) << s2;
                line = line.substr(pos + s1.length());
                pos = line.find(s1);
            }
            fileRep << line << std::endl;
        }
	file.close();
	fileRep.close();
}
