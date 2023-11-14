/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:30:09 by jaristil          #+#    #+#             */
/*   Updated: 2023/11/13 17:31:31 by jaristil         ###   ########.fr       */
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
	public:
	const std::string	first_name;
	const std::string	last_name;
	const std::string	nickname;
	const std::string	phone_number;
	const std::string	darkest_secret;

	Contact(const std::string &first, const std::string &last, const std::string &nick,
			const std::string &phone, const std::string &secret);
	~Contact( void );
	
	// !!!! declarer ma fonction membre en const si elle ne modifie pas l'instance de ma classe !!!!
	void display(void) const;
	//{
	// std::cout << first_name << " : " << phone_number << std::endl;
	// std::cout << " : ";
	// std::cout << phone_number << std::endl;	
	//}
};

#endif