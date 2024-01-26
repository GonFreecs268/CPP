/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 18:25:57 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/26 16:05:08 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Cure.hpp"

Cure::Cure() : AMateria("cure") {
	
	std::cout << _YELLOW "Cure Default constructor called" _END << std::endl;
}

// Cure::Cure(const Cure &src) : AMateria("cure") how to use src so?
Cure::Cure(Cure const &src) {
	
	std::cout << _YELLOW "Cure Copy constructor called" _END << std::endl;
	this->setType("cure");
	*this = src;
}

Cure&	Cure::operator=(Cure const &src) {
	
	std::cout << _YELLOW "Cure Assignment Operator called" _END << std::endl;
	if (this != &src)
		this->setType(src.getType());
	return (*this);
}

Cure::~Cure() {
	
	std::cout << _YELLOW "Cure Destructor called" _END << std::endl;
}

AMateria* Cure::clone() const {
	
	return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
	std::cout << _FOREST_GREEN "*heals " << target.getName() << "'s wounds *" _END << std::endl;
}