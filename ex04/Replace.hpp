/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 18:50:00 by aparolar          #+#    #+#             */
/*   Updated: 2022/07/17 16:51:26 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <iostream>
# include <fstream>
# include <string>
# include <ctype.h>

class Replace
{
	private:
		std::string		_infile;
		std::string		_outfile;
		std::string		_find;
		std::string		_replace;
		std::fstream	*_in;
		std::fstream	*_out;

	public:
		Replace(std::string infile, std::string find, std::string replace);
		~Replace();

		bool	checkArguments(void);
		bool	openFiles(void);
		void	closeFiles(void);
		void	run(void);
		void	replace(void);
};

#endif
