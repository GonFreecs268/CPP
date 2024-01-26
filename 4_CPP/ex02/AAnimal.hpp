/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 13:45:24 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/25 16:53:57 by jaristil         ###   ########.fr       */
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

class AAnimal
{
	public :

	AAnimal(void);
	AAnimal(std::string _type);
	AAnimal(const AAnimal &src);
	virtual ~AAnimal(void);

	AAnimal&				operator=(const AAnimal &src);

	std::string	GetType(void) const;
	virtual void	makeSound(void) const = 0;
	
	protected :
	
	std::string type;	
};