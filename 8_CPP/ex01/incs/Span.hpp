/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:49:50 by jaristil          #+#    #+#             */
/*   Updated: 2024/02/13 18:24:09 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <iterator> // std::distance
#include <vector> // std::vector
#include <algorithm> // find
#include <limits> // std::numeric
#include "colors.hpp"

class Span
{
	public:

	// Constructeurs & Destructeurs
    Span();
	Span(unsigned int size);
    Span(Span const &src);
    ~Span();

	// Surcharge d'opérateurs
    Span& operator=(Span const &rhs);

	// Getters & Setters
	unsigned int	getSize() const;
	
	// Méthodes
	void				addNumber(unsigned int new_N);
	// void				addNumber( std::vector<int> tabAdd )
	unsigned int		shortestSpan() const;
	unsigned int		longestSpan() const;
	
	
	private:

	unsigned int		_N;
	std::vector<int>	_numbers;
	
};

