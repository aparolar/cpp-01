/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 17:20:10 by aparolar          #+#    #+#             */
/*   Updated: 2022/07/16 17:25:48 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{

}

Weapon::~Weapon()
{

}

std::string&	Weapon::getType(void)
{
	return (_type);
}

void			Weapon::setType(std::string type)
{
	_type = type;
}