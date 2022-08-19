/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 11:23:52 by gclausse          #+#    #+#             */
/*   Updated: 2022/08/19 11:23:52 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("", 100, 100, 30)
{
	std::cout <<COLOR  B_GREEN "FragTrap Constructor called"  COLOR RESET << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name, 100, 100, 30)
{
	std::cout <<COLOR  B_GREEN "FragTrap Param constructor"  COLOR RESET << std::endl;
}

FragTrap::FragTrap(FragTrap const& copy) : ClapTrap("", 100, 50, 20)
{
	std::cout <<COLOR  B_GREEN "FragTrap Copy constructor" COLOR RESET  << std::endl;
	operator=(copy);
}

FragTrap::~FragTrap()
{
	std::cout <<COLOR  B_GREEN "FragTrap " << _name << " Destructor called" COLOR RESET  << std::endl;
}

void		FragTrap::display(std::ostream& stream) const
{
	if (_hitPoints < 0)
		stream << "FragTrap " << _name << " is out of hit points, and has " << _energyPoints << " energy points and " << _attackDamage << " attack dammage.";
	else
		stream << "FragTrap " << _name << " has " << _hitPoints << " hit points, " << _energyPoints << " energy points and " << _attackDamage << " attack dammage.";
}

void FragTrap::attack(const std::string& target)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		_energyPoints -= 1;
		std::cout << COLOR MAGENTA << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" COLOR RESET <<std ::endl;
	}
	else
		std::cout << COLOR CYAN  "You can't attack if you're out of energy points or hit points!" COLOR RESET << std::endl;
}

void		FragTrap::highFivesGuys()
{
	std::cout << COLOR YELLOW "FragTrap wants to hive five! 🙌" COLOR RESET << std::endl;
}

std::ostream&	operator<<(std::ostream& stream, FragTrap const& copy)
{
	copy.display(stream);
	return (stream);
}