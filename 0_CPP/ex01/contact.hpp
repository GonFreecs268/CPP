/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:30:09 by jaristil          #+#    #+#             */
/*   Updated: 2023/12/21 19:23:47 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>

class Contact
{
	// access specifier
	private:
	const std::string	first_name;
	const std::string	last_name;
	const std::string	nickname;
	const std::string	phone_number;
	const std::string	darkest_secret;

	public:
	Contact(const std::string &first, const std::string &last, const std::string &nick,
			const std::string &phone, const std::string &secret);
	~Contact(void);
	
	const	std::string getfirst_name() { return first_name; };
	const	std::string getlast_name() { return last_name; };
	const	std::string	getnickname() { return nickname; };
	const	std::string	getphone_number() { return phone_number; };
	const	std::string	getdarkest_secret() { return darkest_secret; };

	void display(void) const;
	//{
	// std::cout << first_name << " : " << phone_number << std::endl;
	// std::cout << " : ";
	// std::cout << phone_number << std::endl;	
	//}
};

#endif