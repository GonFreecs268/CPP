/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 16:23:49 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/27 19:57:53 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include <string>
#include <string.h>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
	public:

	Character(std::string name);
    Character(Character const &src);
    virtual ~Character(); //not sure to virtual
	
    Character& 					operator=(Character const & hrs);

	virtual std::string const	&getName() const;
	virtual int					getNbMaterias() const;
	
	AMateria*	getAMateria(int idx) const;

	void						equip(AMateria* m);
	void						unequip(int idx);
	void						use(int idx, ICharacter& target);
	
	private :

	std::string	_name;
	AMateria	*_inventory[4];
	int			_nbMaterias;
};

#endif

