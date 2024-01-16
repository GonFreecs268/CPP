/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 16:33:49 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/13 15:45:57 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	public:
	
	// HumanB(void);
	HumanB(std::string name);
	~HumanB(void);

	void	attack(void);
	void	setWeapon(Weapon *weapon);
	
	private:
	
	std::string	_name;
	Weapon		*_weapon;
};

#endif

