/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 17:24:10 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/11 17:58:43 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# define SUCCESS 0

#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <ctype.h>
#include <cstring>
#include <string.h>

class	Zombie
{
	public :
	
	Zombie(void);
	Zombie(std::string name);
	~Zombie(void);

	void		announce( void ) const;
	void		SetName(std::string name);
	std::string	GetName(void) const;

	private :
	
	std::string _name;
};

Zombie *zombieHorde(int N, std::string name);

#endif