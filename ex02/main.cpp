/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 20:53:42 by gclausse          #+#    #+#             */
/*   Updated: 2022/08/17 20:53:42 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ScavTrap	scavtrap("Clement");
	FragTrap	fragtrap("Lola");
	std::string	targetname;

	std::cout << "How would you like to name your target? : " << std::endl;
	std::getline(std::cin, targetname);
	ClapTrap target(targetname);
	std::cout << "Let's start the fight!" << std::endl << std::endl;


	scavtrap.attack(targetname);
	std::cout << scavtrap << std::endl << std::endl;
	scavtrap.takeDamage(20);
	std::cout << scavtrap << std::endl << std::endl;
	scavtrap.beRepaired(3);
	std::cout << scavtrap << std::endl << std::endl;
	scavtrap.guardGate();
	std::cout << scavtrap << std::endl << std::endl;
	
	fragtrap.attack(targetname);
	std::cout << fragtrap << std::endl << std::endl;
	fragtrap.takeDamage(20);
	std::cout << fragtrap << std::endl << std::endl;
	fragtrap.attack(targetname);	
	std::cout << fragtrap << std::endl << std::endl;
	fragtrap.takeDamage(20);
	std::cout << fragtrap << std::endl << std::endl;	
	fragtrap.highFivesGuys();
	std::cout << fragtrap << std::endl << std::endl;
	fragtrap.attack(targetname);
	std::cout << fragtrap << std::endl << std::endl;	
	fragtrap.takeDamage(60);
	std::cout << fragtrap << std::endl << std::endl;
	fragtrap.attack(targetname);
	std::cout << fragtrap << std::endl << std::endl;


	return 0;
}