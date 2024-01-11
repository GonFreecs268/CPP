/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 18:31:58 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/11 17:28:36 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <ctype.h>
#include <cstring>
#include <string.h>

# define SUCCESS 0

class	Zombie
{
	public :

	Zombie(void);
	~Zombie(void);
	Zombie( std::string name );

	void	announce( void ) const;
	static Zombie*	newZombie( std::string name );
	static void	randomChump( std::string name );
	
	private :

	std::string _name;
};

#endif
