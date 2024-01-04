/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 17:32:40 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/04 18:41:39 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>
#include <stdlib.h>
#include "contact.hpp"

class Phonebook
{
	public:
	
	Phonebook(void);
	~Phonebook(void);
	
	Contact _contact[8];
	
	std::string ListenInput(const std::string &prompt, bool validPhone);
	void	AddContact( Contact &New);
	
};

#endif