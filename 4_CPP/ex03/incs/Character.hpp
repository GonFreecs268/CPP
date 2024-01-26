/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 16:23:49 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/26 20:05:23 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include <sstream>
#include <unistd.h>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <string.h>
#include "ICharacter.hpp"

class Character : public ICharacter
{
	public:

	Character(std::string name);
    Character(Character const & src);
    ~Character();
	
    Character& 					operator=(Character const & hrs);

	virtual std::string const	&getName() const;
	int							getNbMaterias() const;

	void						equip(AMateria* m);
	void						unequip(int idx);
	void						use(int idx, ICharacter& target);
	
	private :

	std::string	_name;
	AMateria	*_inventory[4];
	int			_nbMaterias;
};

#endif

