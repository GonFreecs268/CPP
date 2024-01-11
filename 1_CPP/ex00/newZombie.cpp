/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 18:32:28 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/11 16:19:24 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// renvoie un ptr sur un objet
Zombie *Zombie::newZombie( std::string name ) {
	
	Zombie* NewZ = new Zombie(name);
	return (NewZ);
}