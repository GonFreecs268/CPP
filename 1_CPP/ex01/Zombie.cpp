/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 17:23:49 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/12 14:50:37 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void ) {

	// this->_name = "Nico";
	std::cout << "Constructor called:" << this->_name << " is coming back to life !" << std::endl;
	return ;
}

Zombie::~Zombie( void ) {

	std::cout << "Destructor called: " << this->_name << " is going back to an eternal sleep !" << std::endl;
	return ;
}

// Zombie::Zombie( std::string name) : _name( name) {
Zombie::Zombie( std::string name) {
	
	this->_name = name;
	std::cout << this->_name << " have made a contract with The Death !" << std::endl;
	return ;
}

void	Zombie::SetName(std::string name) {

	this->_name = name;
	return ;
}

std::string Zombie::GetName(void) const{

	return (this->_name);
}

void	Zombie::announce( void ) const {

	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
