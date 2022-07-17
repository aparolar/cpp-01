/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 19:52:58 by aparolar          #+#    #+#             */
/*   Updated: 2022/07/17 21:56:53 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen()
{
}

Karen::~Karen()
{
}

void	Karen::complain( std::string level )
{
	void	(Karen::*functionLevels[4])(void);

	functionLevels[0] = &Karen::debug;
	functionLevels[1] = &Karen::info;
	functionLevels[2] = &Karen::warning;
	functionLevels[3] = &Karen::error;

	std::string levels[4] = {"debug", "info", "warning", "error"};

	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			(this->*functionLevels[i])();
			return ;
		}
	}
	std::cout << "I'dont know what's you would." << std::endl;
}

void	Karen::debug(void)
{
	std::cout << "DEBUG: I love to get extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle burger. I just love it!";
	std::cout << std::endl;
}

void	Karen::info(void)
{
	std::cout << "INFO: I cannot believe adding extra bacon cost more money.";
	std::cout << "You don't put enough! If you did I would not have to ask for it!";
	std::cout << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "WARNING: I think I deserve to have some extra bacon for free.";
	std::cout << "I've been coming here for years and you just started working here last month";
	std::cout << std::endl;
}

void	Karen::error(void)
{
	std::cout << "ERROR: This is unacceptable, I want to speak to the manager now..." << std::endl;
}
