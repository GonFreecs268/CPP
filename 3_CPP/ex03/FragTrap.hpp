/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:47:25 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/23 16:52:59 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class	FragTrap : public virtual ClapTrap
{
	public :

	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(FragTrap const &src);
	~FragTrap(void);

	FragTrap&	operator=(FragTrap const &src);
	
	void		attack(const std::string &target);
	void		highFivesGuys(void);
};