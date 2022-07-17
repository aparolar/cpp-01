/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 19:46:38 by aparolar          #+#    #+#             */
/*   Updated: 2022/07/17 21:47:50 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>

class Karen
{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
		
	public:
		Karen(void);
		~Karen();

		void	complain( std::string level );
};	

#endif
