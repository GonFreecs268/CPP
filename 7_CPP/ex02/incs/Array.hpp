/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 18:44:24 by jaristil          #+#    #+#             */
/*   Updated: 2024/02/09 16:53:39 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <stdlib.h>
#include "colors.hpp"
#include "iter.hpp"

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
	T				*getArray() const;
	
	// Méthodes
	unsigned int	size() const;


	// Exception
	class WrongIndex : public std::exception
	{
		public :
			virtual const char *what() const throw();
	};
	class EmptySize : public std::exception
	{
		public :
			virtual const char *what() const throw();
	};

	private:

	T			*_array;
	unsigned int _size;
};

#include "../srcs/Array.tpp"
