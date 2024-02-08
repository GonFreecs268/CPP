/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:55:31 by jaristil          #+#    #+#             */
/*   Updated: 2024/02/07 14:35:58 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <stdint.h> //uintptr_t
#include "colors.hpp"


typedef struct s_Data 
{
	int			value;
}				Data;

class Serializer
{
	public:

	
	// Méthodes
	static uintptr_t	serialize(Data* ptr);
	static Data*		deserialize(uintptr_t raw);

	private :
	
	// Constructeurs & Destructeurs
    Serializer();
    Serializer(Serializer const &src);
    ~Serializer();

	// Surcharge d'opérateurs
    Serializer& operator=(Serializer const &rhs);
};
