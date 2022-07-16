/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 17:55:09 by aparolar          #+#    #+#             */
/*   Updated: 2022/07/16 18:26:00 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon() {}

HumanB::~HumanB() {}

void	HumanB::setWeapon(Weapon weapon)
{
	_weapon = &weapon;
}

void	HumanB::attack(void)
{
	if (_weapon)
		std::cout << _name << " attacks with his " << (*_weapon).getType() << std::endl;
	else
		std::cout << _name << " has not weapon" << std::endl;
}