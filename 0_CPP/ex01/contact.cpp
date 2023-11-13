/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:20:49 by jaristil          #+#    #+#             */
/*   Updated: 2023/11/13 18:03:31 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact( void ) {
	
	std::cout << "Constructor called" << std::endl;
	
	this->first_name = "Jules";
	std::cout << "this->first_name: " << this->first_name << std::endl;
	
	this->display();
	
	return;
}

Contact::~Contact( void ) {
	
	std::cout << "Destructor called" << std::endl;
	return;
}

void	Contact::display( void ) {
	
	std::cout << "Display is called" << std::endl;
	
	std::cout << first_name << " : " << phone_number << std::endl;
	return;
}
