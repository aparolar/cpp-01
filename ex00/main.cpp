/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 10:17:39 by aparolar          #+#    #+#             */
/*   Updated: 2022/07/16 11:58:56 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie Michael("Michael");
	Michael.announce();
	
	Zombie *Steve = newZombie("Steve");
	Steve->announce();

	delete Steve;

	randomChump("John");
	return (0);
}