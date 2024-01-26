/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 18:18:01 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/26 15:43:31 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/AMateria.hpp"

AMateria::AMateria() {
	
	std::cout << _YELLOW "AMateria Default constructor called" _END << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type) {

	std::cout << _YELLOW "AMateria Parametric Constructor Called: " << type <<  _END << std::endl;	
}

AMateria::AMateria(const AMateria &src) : _type(src._type) {
	
	std::cout << _YELLOW "AMateria Copy constructor called" _END << std::endl;
}

AMateria&	AMateria::operator=(const AMateria &src) {
	
	std::cout << _YELLOW "AMateria Assignment Operator called" _END << std::endl;
	if (this != &src)
		_type = src._type;
	return (*this);
}

AMateria::~AMateria() {
	
	std::cout << _YELLOW "AMateria Destructor called" _END << std::endl;
}

std::string const & AMateria::getType() const {
	
	return (this->_type);
}

void	AMateria::setType(std::string type) {
	
	this->_type = type;
}

void	AMateria::use(ICharacter &target) {
	
	std::cout << _FOREST_GREEN << "shoot a materia at " << target.getName() << _END << std::endl;
}
