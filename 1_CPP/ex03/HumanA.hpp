/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 16:29:51 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/12 19:47:58 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	private:

	std::string		_name;
	const Weapon&	weapon; // car ref ne peut pas !ref
	
	public:
	
	HumanA(void);
	~HumanA(void);

	void	attack(void);
	void	setWeapon(Weapon& weapon);
};

#endif