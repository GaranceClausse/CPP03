/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 22:46:38 by gclausse          #+#    #+#             */
/*   Updated: 2022/08/17 22:46:38 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("", 100, 50, 20)
{
	std::cout << "ScavTrap Constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap Param constructor" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& copy) : ClapTrap("", 100, 50, 20)
{
	std::cout << "ScavTrap Copy constructor" << std::endl;
	operator=(copy);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " Destructor called" << std::endl;
}

void		ScavTrap::display(std::ostream& stream) const
{
	stream << "ScavTrap " << _name << " has " << _hitPoints << " hit points, " << _energyPoints << " energy points and " << _attackDamage << " attack dammage.";
}

void ScavTrap::attack(const std::string& target)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		_energyPoints -= 1;
		std::cout << COLOR MAGENTA "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" COLOR RESET <<std ::endl;
	}
	else
		std::cout << COLOR CYAN  "You can't attack if you're out of energy points or hit points!" COLOR RESET << std::endl;
}

void		ScavTrap::guardGate()
{
	std::cout << "ScavTrap have enterred in Gate keeper mode." << std::endl;
}

std::ostream&	operator<<(std::ostream& stream, ScavTrap const& copy)
{
	copy.display(stream);
	return (stream);
}