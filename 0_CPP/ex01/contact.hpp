/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:30:09 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/05 15:05:24 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>
#include <stdlib.h>
#include <ctype.h>

class Contact
{
	// access specifier
	private:
	std::string	firstname;
	std::string	lastname;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

	public:
	Contact(void);
	~Contact(void);
	
	std::string getFirstname() const;
	void	setFirstname(std::string Firstname);
	
	std::string getLastname() const;
	void	setLastname(std::string Lastname);
	
	std::string	getNickname() const;
	void	setNickname(std::string Nickname);
	
	std::string	getPhone_number() const;
	void	setPhone_number(std::string Phone_number);
	
	std::string	getDarkest_secret() const;
	void	setDarkest_secret(std::string Darkest_secret);

	void display(void) const;
};

#endif