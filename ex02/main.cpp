/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 13:10:36 by aparolar          #+#    #+#             */
/*   Updated: 2022/09/19 13:48:12 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "string address : " << &str << std::endl;
	std::cout << "stringPTR address : " << &(*stringPTR) << std::endl;
	std::cout << "stringREF address : " << &stringREF << std::endl;
	std::cout << "string using pointer: " << *stringPTR << std::endl;
	std::cout << "string using reference: " << stringREF << std::endl;
	return (0);
}

