/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 11:24:10 by gclausse          #+#    #+#             */
/*   Updated: 2022/08/19 11:24:10 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"


class FragTrap : public ClapTrap
{
	public:
		FragTrap(/* args */);
		FragTrap(std::string name);
		FragTrap(const FragTrap& copy);
//		FragTrap &operator=(const FragTrap &copy);
		~FragTrap();

		void display(std::ostream& stream) const;
		void attack(const std::string& target);
		void highFivesGuys(void);
};

std::ostream&	operator<<(std::ostream& stream, FragTrap const& copy);