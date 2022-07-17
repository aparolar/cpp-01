/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 18:54:46 by aparolar          #+#    #+#             */
/*   Updated: 2022/07/17 16:55:57 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace(std::string infile, std::string find, std::string replace)
{
	_infile = infile;
	_outfile = infile.append(".replace");
	_find = find;
	_replace = replace;
}

Replace::~Replace() {}

bool	Replace::checkArguments(void)
{
	if (_infile.length() == 0 || _find.length() == 0 || _replace.length() == 0)
	{
		std::cout << "Error some empty arguments." << std::endl;
		return (false);
	}
	return (true);
}

bool	Replace::openFiles(void)
{
	(*_in).open(_infile.c_str(), std::ios::in);
	if ((*_in).fail())
	{
		std::cout << "Failed to open " << _infile << std::endl;
	}
	else
	{
		(*_out).open(_outfile.c_str(), std::ios::out | std::ios::trunc);		
		if ((*_out).fail())
		{
			std::cout << "Failed to open " << _outfile << std::endl;
			(*_in).close();
		}
	}
	if (((*_in).good() && (*_out).good()))
		return (true);
	return (false);
}

void	Replace::closeFiles(void)
{
	(*_in).close();
	(*_out).close();
}

void	Replace::run(void)
{
	std::fstream	in;
	std::fstream	out;
	_in = &in;
	_out = &out;

	if (checkArguments() && openFiles())
	{
		replace();
		closeFiles();
	}
}

void	Replace::replace(void)
{
	std::string	buff;
	std::size_t	pos;

	while (!(*_in).eof())
	{
		pos = 0;
		std::getline((*_in), buff);
		pos = buff.find(_find, pos);
		if (pos != std::string::npos)
		{
			buff.erase(pos, _find.length());
			buff.insert(pos, _replace);
			pos += _replace.length();
		}
		(*_out) << buff << std::endl;
		buff.empty();
	}
}
