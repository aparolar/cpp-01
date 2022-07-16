/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 17:17:20 by aparolar          #+#    #+#             */
/*   Updated: 2022/07/16 18:08:33 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(&weapon) {}

HumanA::~HumanA() {}

void	HumanA::attack(void)
{
	std::cout << _name << " attacks with his " << (*_weapon).getType() << std::endl;
}