/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 18:33:44 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/24 19:08:23 by jaristil         ###   ########.fr       */
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

class   WrongAnimal
{
    public:

    WrongAnimal(void);
    WrongAnimal(std::string _type);
    WrongAnimal(const WrongAnimal &src);
    ~WrongAnimal(void);
    
    WrongAnimal& operator=( const WrongAnimal &src);
    
	std::string	GetType(void) const;
	void		makeSound(void) const;
	
	protected:
  
    std::string   type;  
};

