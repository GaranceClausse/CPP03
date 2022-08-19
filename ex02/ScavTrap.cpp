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
	std::cout <<COLOR  B_RED "ScavTrap Constructor called"  COLOR RESET << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name, 100, 50, 20)
{
	std::cout <<COLOR B_RED "ScavTrap Param constructor" COLOR RESET << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& copy) : ClapTrap("", 100, 50, 20)
{
	std::cout << COLOR B_RED "ScavTrap Copy constructor"  COLOR RESET << std::endl;
	operator=(copy);
}

ScavTrap::~ScavTrap()
{
	std::cout <<COLOR  B_RED "ScavTrap " << _name << " Destructor called"  COLOR RESET << std::endl;
}

void		ScavTrap::display(std::ostream& stream) const
{
	if (_hitPoints < 0)
		stream << "ScavTrap " << _name << " is out of hit points, and has " << _energyPoints << " energy points and " << _attackDamage << " attack dammage.";
	else
		stream << "ScavTrap " << _name << " has " << _hitPoints << " hit points, " << _energyPoints << " energy points and " << _attackDamage << " attack dammage.";
}

void ScavTrap::attack(const std::string& target)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		_energyPoints -= 1;
		std::cout << COLOR MAGENTA << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" COLOR RESET <<std ::endl;
	}
	else
		std::cout << COLOR CYAN  "You can't attack if you're out of energy points or hit points!" COLOR RESET << std::endl;
}

void		ScavTrap::guardGate()
{
	std::cout << COLOR YELLOW "ScavTrap have enterred in Gate keeper mode." COLOR RESET << std::endl;
}

std::ostream&	operator<<(std::ostream& stream, ScavTrap const& copy)
{
	copy.display(stream);
	return (stream);
}