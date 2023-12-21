/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:20:49 by jaristil          #+#    #+#             */
/*   Updated: 2023/12/21 17:36:57 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact(const std::string &first, const std::string &last, const std::string &nick,
				const std::string &phone, const std::string &secret)
	: first_name(first), last_name(last), nickname(nick), phone_number(phone), darkest_secret(secret)
{
	std::cout << "Constructor called" << std::endl;

	std::cout << "this->first_name = " << this->getfirst_name << std::endl;
	std::cout << "this->last_name = " << this->getlast_name << std::endl;
	std::cout << "this->nickname = " << this->getnickname << std::endl;
	std::cout << "this->phone_number = " << this->getphone_number << std::endl;
	std::cout << "this-> darkest_secret = " << this->getdarkest_secret << std::endl;

	// this->first_name = "Juvles";
	return;
}

Contact::~Contact(void) {
	
	std::cout << "Destructor called" << std::endl;
	return;
}

void	Contact::display(void) const {
	
	std::cout << "Display is called" << std::endl;
	
	std::cout << first_name << " : " << phone_number << std::endl;
	return;
}
