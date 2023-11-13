/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 17:32:40 by jaristil          #+#    #+#             */
/*   Updated: 2023/11/13 17:46:52 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>
#include "contact.hpp"

class PHONEBOOK
{
	public:
	Contact _contact[8];
	int	num;
};

#endif