/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 19:46:11 by aparolar          #+#    #+#             */
/*   Updated: 2022/07/17 21:59:44 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(int argc, char **argv)
{
	Karen	karen;

	if (argc > 1)
	{
		karen.complain(std::string(argv[1]));
		return (0);
	}

	karen.complain("error");
	karen.complain("warning");
	karen.complain("info");
	karen.complain("debug");
	karen.complain("karen info");
	return (0);
}
