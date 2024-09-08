/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 17:20:20 by fgunay            #+#    #+#             */
/*   Updated: 2024/08/20 17:20:22 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {

	ClapTrap ct("odin");
	ClapTrap ct2("zeus");

	ct.attack(ct2.getName());
	ct2.takeDamage(5);

	// ct.attack(ct2.getName());
	// ct2.takeDamage(5);

	// ct.attack(ct2.getName());
	// ct2.takeDamage(5);

	/* ----------------------- */

	// ClapTrap ct("ahmet");
	// ClapTrap ct2("ahmetDusman");
	// std::cout << "\n";

	// for (int i = 0; i < 10; i++) {
	// 	ct.attack(ct2.getName());
	// 	ct2.takeDamage(5);
	// 	ct2.beRepaired(5);
	// 	std::cout << "\n";
	// }

	// std::cout << "ct's health: " << ct.getHit() << std::endl;
	// std::cout << "ct's energy: " << ct.getEnergy() << std::endl;

	// std::cout << "\n";

	// std::cout << "ct2's health: " << ct.getHit() << std::endl;
	// std::cout << "ct2's energy: " << ct.getEnergy() << std::endl;

	// std::cout << "\n";
	// ct.attack(ct2.getName());
	// ct2.beRepaired(5);
	// std::cout << "\n";

	/* ----------------------- */

	// std::cout << "\n";
	// ClapTrap ct("ahmet");
	// ClapTrap ct2("ahmetDusman");
	// std::cout << "\n";

	// ct.takeDamage(2);
	// ct2.takeDamage(7);

	// std::cout << "ct's health: " << ct.getHit() << std::endl;
	// std::cout << "ct's energy: " << ct.getEnergy() << std::endl;
	// std::cout << "\n";
	// std::cout << "ct2's health: " << ct2.getHit() << std::endl;
	// std::cout << "ct2's energy: " << ct2.getEnergy() << std::endl;
	// std::cout << "\n";

    return 0;
}
