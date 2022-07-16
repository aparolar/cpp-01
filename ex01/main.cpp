/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 12:03:17 by aparolar          #+#    #+#             */
/*   Updated: 2022/07/16 13:05:57 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int numberZombies;

	numberZombies = 5;
	Zombie *Horde = zombieHorde(numberZombies, "steve");
	Horde[2].setName("george");
	for (int i = 0; i < numberZombies; i++)
		Horde[i].announce();
	delete[] Horde;
	return (0);
}