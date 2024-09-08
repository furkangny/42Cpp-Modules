#include <iostream>

// std::cin de std::getline() da input almaya yarar ama aralarında fark vardır

// cin boşluk görene kadar okur (space, tab, newline vs.)
// input olarak cin'e bugra kara molla verirsen sadece bugrayi alir
// input olarak cin'e 1234a567 verirsen 1234'ü alir

// getline() ise \n görene kadar okur. enter da \n oldugundan cinle almaya çalıştığın
// bir satıra ex01'de if (input == "") kontrolü yapamazsin, getline()'la yapabilirsin

int main() {
	std::string ss;
	std::cout << "enter a string: ";
	// std::cin >> ss;
	std::getline(std::cin, ss);
	// use each with ENTER and see the difference
	if (ss == "") {
		std::cout << "string boş" << "\n";
	} else {
		std::cout << "string boş değil" << "\n";
	}
}
