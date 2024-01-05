/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:20:49 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/05 17:52:46 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact(void) {
	
	// std::cout << "Constructor called" << std::endl;
	return ;
}

Contact::~Contact(void) {
	
	// std::cout << "Destructor called" << std::endl;
	return;
}

std::string	Contact::getFirstname(void) const {

	return this->firstname;	
}

void	Contact::setFirstname(std::string Firstname) {

	this->firstname = Firstname;
	return ;
}

std::string Contact::getLastname(void) const {

	return this->lastname;
}

void	Contact::setLastname(std::string Lastname) {
	
	this->lastname = Lastname;
	return ;
}

std::string	Contact::getNickname(void) const {
	
	return this->nickname;
}

void	Contact::setNickname(std::string Nickname) {

	this->nickname = Nickname;
	return ;
}

std::string	Contact::getPhone_number(void) const {

	return this->phone_number;
}

void	Contact::setPhone_number(std::string Phone_number) {

	this->phone_number = Phone_number;
	return ;
}

std::string	Contact::getDarkest_secret(void) const {

	return  this->darkest_secret;
}

void	Contact::setDarkest_secret(std::string Darkest_secret) {
	
	this->darkest_secret = Darkest_secret;
	return ;
}
