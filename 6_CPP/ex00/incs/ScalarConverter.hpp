/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 14:59:51 by jaristil          #+#    #+#             */
/*   Updated: 2024/02/03 16:44:25 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "colors.hpp"

class ScalarConverter
{
	public:

	// Constructeurs & Destructeurs
    ScalarConverter();
    ScalarConverter(ScalarConverter const &src);
    ~ScalarConverter();

	// Surcharge d'opérateur
    ScalarConverter& operator=(ScalarConverter const &rhs);
	
	// Getters & Setters

	// Méthodes
	static bool	isChar(std::string str); // static car sans ptr implicite vers obj de la classe
	static bool	isInt(std::string str);
	static bool	isFloat(std::string str);
	static bool	isDouble(std::string str);
	
	void	convert(const std::string &str);
};

