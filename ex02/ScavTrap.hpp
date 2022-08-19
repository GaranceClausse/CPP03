/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 22:46:27 by gclausse          #+#    #+#             */
/*   Updated: 2022/08/17 22:46:27 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(/* args */);
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& copy);
//		ScavTrap &operator=(const ScavTrap &copy);
		~ScavTrap();

		void display(std::ostream& stream) const;
		void attack(const std::string& target);
		void guardGate();
};

std::ostream&	operator<<(std::ostream& stream, ScavTrap const& copy);