/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 17:01:39 by aparolar          #+#    #+#             */
/*   Updated: 2022/07/16 18:24:14 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
	Weapon	weaponA = Weapon();
	Weapon	weaponB = Weapon();

	weaponA.setType("Cold 45");
	weaponB.setType("knive");

	HumanA	humanA = HumanA("Alexkid", weaponA);
	HumanB	humanB = HumanB("Chuck Norris");
	humanA.attack();
	humanB.attack();
	humanB.setWeapon(weaponB);
	humanB.attack();
	humanB.setWeapon(weaponA);
	humanB.attack();
	return (0);
}