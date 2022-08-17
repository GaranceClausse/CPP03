/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 20:53:38 by gclausse          #+#    #+#             */
/*   Updated: 2022/08/17 20:53:38 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class ClapTrap
{
private:
	std::string	_name;
	int			_hitPoints;
	int			_energyPoints;
	int			_attackDamage;


public:
	ClapTrap();
	ClapTrap(std::string _name);
	ClapTrap(const ClapTrap& copy);
	ClapTrap &operator=(const ClapTrap &copy);
	~ClapTrap();

	void display(std::ostream& stream) const;


	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};	

std::ostream    &operator<<(std::ostream &output, ClapTrap const &claptrap);