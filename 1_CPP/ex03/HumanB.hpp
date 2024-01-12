/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 16:33:49 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/12 19:45:56 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
	
	std::string	_name;
	const Weapon&		_weapon;
	
	public:
	
	HumanB(void);
	HumanB(std::string type, Weapon &weapon);
	~HumanB(void);

	void	attack(void);
	void	setWeapon(const Weapon &weapon);
};

#endif

