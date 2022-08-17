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

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	claptrap("Garance");
	std::string	targetname;

	std::cout << "How would you like to name your target? : " << std::endl;
	std::getline(std::cin, targetname);
	ClapTrap target(targetname);

	claptrap.attack(targetname);
	return 0;
}