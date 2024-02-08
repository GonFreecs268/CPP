/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:55:31 by jaristil          #+#    #+#             */
/*   Updated: 2024/02/07 14:05:59 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Serializer.hpp"

/* ************************************************************************** */
/*                     Constructeurs & Destructeurs                   		  */
/* ************************************************************************** */

Serializer::Serializer() {

	std::cout << _YELLOW "Default Constructor called: Serializer" _END << std::endl;
}


Serializer::Serializer(Serializer const &src) {

	(void)src;
	std::cout << _YELLOW "Copy Constructor called: Serializer" _END << std::endl;
}

Serializer::~Serializer() {

	std::cout << _YELLOW "Destructor called: Serializer" _END << std::endl;
}

/* ************************************************************************** */
/*                     Surcharges d'opérateurs                  		      */
/* ************************************************************************** */

Serializer&	Serializer::operator=(Serializer const &rhs) {
	
	(void)rhs;
	std::cout << _YELLOW "Assignment Operator called: Serializer" _END << std::endl;
	return (*this);
}

/* ************************************************************************** */
/*                   			  Méthodes                 		              */
/* ************************************************************************** */

uintptr_t	Serializer::serialize(Data* ptr) {

	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	Serializer::deserialize(uintptr_t raw) {

	return (reinterpret_cast<Data*>(raw));
}