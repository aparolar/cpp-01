/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 10:19:23 by aparolar          #+#    #+#             */
/*   Updated: 2022/07/16 11:47:43 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	_name = name;
}

Zombie::~Zombie()
{
		std::cout << _name << " was destroyed" << std::endl;
}

void	Zombie::announce( void )
{
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}