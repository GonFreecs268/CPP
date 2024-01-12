/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:34:09 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/12 19:54:36 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <ctype.h>
#include <cstring>
#include <string.h>

class Weapon
{
	public:
	
	Weapon(void);
	Weapon(std::string type);
	~Weapon(void);

	void		setType(std::string new_type);
	std::string	getType(void) const;
	
	private:
	
	std::string _type;
};

#endif