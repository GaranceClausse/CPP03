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


#define COLOR "\033[;"
#define RED "31m"
#define GREEN "32m"
#define YELLOW "33m"
#define BLUE "34m"
#define MAGENTA "35m"
#define CYAN "36m"
#define B_RED "41m"
#define B_GREEN "42m"
#define B_YELLOW "43m"
#define B_BLUE	"44m"
#define RESET "\033[0m"


class ClapTrap
{
protected:
	std::string	_name;
	int			_hitPoints;
	int			_energyPoints;
	int			_attackDamage;


public:
	ClapTrap();
	ClapTrap(std::string _name);
	ClapTrap(std::string name, unsigned int hitPoints, unsigned int energyPoints, unsigned int attackDamage);
	ClapTrap(const ClapTrap& copy);
	ClapTrap &operator=(const ClapTrap &copy);
	~ClapTrap();

	void display(std::ostream& stream) const;


	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};	

std::ostream    &operator<<(std::ostream &output, ClapTrap const &claptrap);