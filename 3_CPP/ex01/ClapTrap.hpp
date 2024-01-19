/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 19:52:11 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/19 18:08:46 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <cstring>
#include "colors.hpp"

class ClapTrap
{
	public :
	
	// Constructor & Destructor
	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &src);
	~ClapTrap(void);

	ClapTrap&	operator=(ClapTrap const &src);
	
	// Methods
	void		attack(const std::string &target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);

	// Getter & Setter
	std::string		GetName(void) const;
	
	void			SetHealth(unsigned int amount);
	unsigned int	GetHealth(void) const;
	
	void			SetEnergy(unsigned int amount);
	unsigned int	GetEnergy(void) const;
	
	void			SetAttack(unsigned int amount);
	unsigned int	GetAttack(void) const;

	protected :

	std::string 	_name;
	unsigned int	_health;
	unsigned int	_energy;
	unsigned int	_attack;	
};
