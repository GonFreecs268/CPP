/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 18:44:24 by jaristil          #+#    #+#             */
/*   Updated: 2024/02/08 19:19:59 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <stdlib.h>
#include "colors.hpp"
#include "iter.hpp"
#include "../srcs/Array.tpp"

template< typename T >
class Array {

	public:

	// Constructeurs & Destructeurs
    Array();
	Array(unsigned int n);
    Array(Array<T> const &src);
    ~Array();

	// Surcharge d'opérateurs
    Array<T> 		&operator=(Array<T> const &rhs);
	T 		 		&operator[](unsigned int n) const;

	// Getters & Setters
	
	// Méthodes
	unsigned int	size() const;


	// Exception
	class WrongIndex : public std::exception
	{
		public :
			virtual const char *what() const throw();
	}
	
	private:

	T			*_array;
	unsigned int _size;
};

