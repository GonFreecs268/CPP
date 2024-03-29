/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 16:52:57 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/22 12:33:22 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"
#include "colors.hpp"

class	ScavTrap : public ClapTrap
{
	public :

	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &src);
	~ScavTrap(void);
	
	ScavTrap& operator=(ScavTrap const &src);
	
	void	attack(const std::string &target);
	void	guardGate(void);
};