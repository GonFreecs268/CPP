/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 17:32:40 by jaristil          #+#    #+#             */
/*   Updated: 2023/12/27 18:44:12 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>
#include "contact.hpp"

class Phonebook
{
	public:
	
	Phonebook(void);
	~Phonebook(void);
	
	Contact _contact[8];
	
	void	AddContact( Contact &New);
};

#endif