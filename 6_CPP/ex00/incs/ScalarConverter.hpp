/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 14:59:51 by jaristil          #+#    #+#             */
/*   Updated: 2024/02/06 22:02:28 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip> // std::scientific
#include <string>
#include <cctype> // std::tolower
#include <limits.h> // INT_MIN/MAX
// #include <limits> // std::numeric
#include <cmath> // isnan // isinf
#include "colors.hpp"
#include <stdio.h> // NULL
#include <stdlib.h> //strtof // atoi

class ScalarConverter
{
	private :

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
	
	static void	printChar(char c);
	static void	printInt(int integer);
	static void	printFloat(float f);
	static void	printDouble(double d);
	
	static void	print_error(const std::string &type);
	
	static void	convertChar(char c);
	static void	convertInt(int integer, const std::string &str);
	static void	convertFloat(double d, const std::string &str);
	static void	convertDouble(double d, const std::string &str);
	
	public :
	
	static void	convert(const std::string &str);
};

