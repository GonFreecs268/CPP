/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 18:19:57 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/26 16:06:08 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Ice.hpp"

Ice::Ice() : AMateria("ice") {
	
	std::cout << _YELLOW "Ice Default constructor called" _END << std::endl;
}

Ice::Ice(std::string const &type) : AMateria(type) {

	std::cout << _YELLOW "Ice Parametric Constructor Called: " << type <<  _END << std::endl;	
}

Ice::Ice(const Ice &src) {
	
	std::cout << _YELLOW "Ice Copy constructor called" _END << std::endl;
	this->setType("ice");
	*this = src;
}

Ice&	Ice::operator=(const Ice &src) {
	
	std::cout << _YELLOW "Ice Assignment Operator called" _END << std::endl;
	if (this != &src)
		_type = src._type;
	return (*this);
}

Ice::~Ice() {
	
	std::cout << _YELLOW "Ice Destructor called" _END << std::endl;
}

AMateria* Ice::clone() const {
	
	return new Ice(*this);
}

// put get name to character class
void	Ice::use(ICharacter &target) {
	
	std::cout << _FOREST_GREEN << "shoot an ice bolt at " << target.getName() << _END << std::endl;
}






