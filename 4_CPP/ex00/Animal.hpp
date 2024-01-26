/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 13:45:24 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/24 17:58:37 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>
#include <ctype.h>
#include <string>
#include <cstring>
#include <string.h>
#include <stdlib.h>
#include "colors.hpp"

class Animal
{
	public :

	Animal(void);
	Animal(std::string _type);
	Animal(const Animal &src);
	virtual ~Animal(void);

	Animal&				operator=(const Animal &src);

	virtual std::string	GetType(void) const;
	virtual void	makeSound(void) const;
	
	protected :
	
	std::string type;	
};