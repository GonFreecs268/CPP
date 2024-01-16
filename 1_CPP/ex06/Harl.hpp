/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:15:39 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/16 15:26:35 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <cstring>

class Harl
{
	public:
	
	Harl( void );
	~Harl( void );

	void	complain( std::string level );
	
	private:
	
	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );
};

#endif