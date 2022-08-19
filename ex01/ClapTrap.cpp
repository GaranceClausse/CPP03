/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 20:53:35 by gclausse          #+#    #+#             */
/*   Updated: 2022/08/17 20:53:35 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name(""), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap Param constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string name, unsigned int hitPoints, unsigned int energyPoints, unsigned int attackDamage) :
	_name(name), _hitPoints(hitPoints), _energyPoints(energyPoints), _attackDamage(attackDamage)
{
	std::cout << "ClapTrap Param2 constructor" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& copy)
{
	std::cout << "ClapTrap Copy constructor" << std::endl;
	operator=(copy);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " Destructor called" << std::endl;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const& copy)
{
	std::cout << "ClapTrap Operator =" << std::endl;
	_name = copy._name;
	_hitPoints = copy._hitPoints;
	_energyPoints = copy._energyPoints;
	_attackDamage = copy._attackDamage;
	return (*this);
}

void		ClapTrap::display(std::ostream& stream) const
{
	stream << "ClapTrap " << _name << " has " << _hitPoints << " hit points, " << _energyPoints << " energy points and " << _attackDamage << " attack dammage.";
}

std::ostream&	operator<<(std::ostream& stream, ClapTrap const &copy)
{
	copy.display(stream);
	return (stream);
}

void ClapTrap::attack(const std::string& target)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		_energyPoints -= 1;
		std::cout << COLOR MAGENTA "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" COLOR RESET <<std ::endl;
	}
	else
		std::cout << COLOR CYAN  "You can't attack if you're out of energy points or hit points!" COLOR RESET << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	_hitPoints -= amount;
	std::cout << COLOR RED "ClapTrap " << _name << " takes " << amount << " of damage! " COLOR RESET <<std ::endl;
	if (_hitPoints == 0)
		std::cout <<  COLOR CYAN << _name << "is dead" COLOR RESET  << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		_hitPoints += amount;
		_energyPoints -= 1;
		std::cout << COLOR GREEN "ClapTrap" << _name << " is repaired of " << amount << " points and now has " << _hitPoints << " hit points!" COLOR RESET <<std ::endl;

	}
	else
		std::cout << COLOR CYAN "You can't be repaired if you're out of energy points or hit points!" COLOR RESET << std::endl;
}