/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 17:32:40 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/10 17:42:56 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>
#include <stdlib.h>
#include <ctype.h>
#include "contact.hpp"

class Phonebook
{
	public:
	
	Phonebook(void);
	~Phonebook(void);
	
	std::string ListenInput(const std::string &prompt, bool validPhone);
	void	AddContact(Contact &New);
	void	DisplayContact(Contact infos) const;
	void	PrintMenu() const;
	int		DisplayDirectory(Phonebook &directory) const;

	// fonction qui renvoie une reference ver sun objet type Contact
	Contact& GetContact(int index);
	
	private :
	
	Contact _contact[8];
};

#endif
