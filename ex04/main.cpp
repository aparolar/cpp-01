/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 18:47:35 by aparolar          #+#    #+#             */
/*   Updated: 2022/07/17 16:55:07 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <iostream>
#include <fstream>
#include "Replace.hpp"

int	main(int argc, char **argv)
{
	if (argc < 4)
	{
		std::cout << "Insuficient arguments." << std::endl;
	}
	else
	{
		Replace	replace = Replace(std::string(argv[1]),	std::string(argv[2]), std::string(argv[3]));
		replace.run();
	}
	return (0);
}
