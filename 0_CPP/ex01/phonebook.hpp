/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 17:32:40 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/05 18:18:12 by jaristil         ###   ########.fr       */
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
	
	Contact _contact[8];

};

#endif
