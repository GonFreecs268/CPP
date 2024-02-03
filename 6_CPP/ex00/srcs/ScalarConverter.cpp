/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 14:59:51 by jaristil          #+#    #+#             */
/*   Updated: 2024/02/03 19:11:24 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/ScalarConverter.hpp"

/* ************************************************************************** */
/*                     Constructeurs & Destructeurs                   		  */
/* ************************************************************************** */

ScalarConverter::ScalarConverter() {

	std::cout << _YELLOW "Default Constructor called: ScalarConverter" _END << std::endl;
}

ScalarConverter::ScalarConverter(ScalarConverter const &src) {

	(void)src;
	std::cout << _YELLOW "Copy Constructor called: ScalarConverter" _END << std::endl;
}

ScalarConverter::~ScalarConverter() {

	std::cout << _YELLOW "Destructor called: ScalarConverter" _END << std::endl;
}

/* ************************************************************************** */
/*                     Surcharges d'opérateurs                  		      */
/* ************************************************************************** */

ScalarConverter&	ScalarConverter::operator=(ScalarConverter const &rhs) {
	
	(void)rhs;
	std::cout << _YELLOW "Assignment Operator called: ScalarConverter" _END << std::endl;
	return (*this);
}

/* ************************************************************************** */
/*                    		 Getters & Setters                  		      */
/* ************************************************************************** */

/* ************************************************************************** */
/*                   			  Méthodes                 		              */
/* ************************************************************************** */

bool	ScalarConverter::isChar(std::string str) {

	if (str.length() == 1 && !isdigit(str[0]))
		return true;
	return false;
}

bool ScalarConverter::isInt(std::string str) {

	size_t	i = 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (isdigit(str[i]))
		i++;
	if (i == str.length())
		return true;
	return false;
}

bool	ScalarConverter::isFloat(std::string str) {

	if (str == "-inff" || str == "+inff" || str == "nanf")
		return true;
		
	unsigned long i = 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (isdigit(str[i]))
		i++;
	// verification du . decimal et du suffixe f but not sure
	if (str[i] == '.' && isdigit(str[i + 1]) && str[i + 2] == 'f' && i + 2 == str.length() - 1)
		return true;
	return false;
}

bool	ScalarConverter::isDouble(std::string str) {

	if (str == "-inf" || str == "+inf" || str == "nan")
		return true;
		
	unsigned long i = 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (isdigit(str[i]))
		i++;
	// not sure about 42.0012 and others so dome some test
	if (str[i] == '.' && isdigit(str[i + 1]) && i + 1 == str.length() - 1)
		return true;
	return false;
}



void	ScalarConverter::convert(const std::string &str) {
	
	const int CHAR_TYPE = 0;
	const int INT_TYPE = 1;
	const int FLOAT_TYPE = 2;
	const int DOUBLE_TYPE = 3;

	int type = -1; // initialisation
	bool(*Type[4])(std::string str) = {isChar, isInt, isFloat, isDouble};
	
	for (int i = 0; i < 4; i++)
	{
		if (Type[i](str))
		{	
			type = i;
			break;
		}
	}
	
	char	c = 0;
	int		integer = 0;
	float	f = 0.0f;
	double	d = 0.0;

	switch(type)
	{
		case CHAR_TYPE:
			c = str[0];
			convertChar(c);
			break ;
		case INT_TYPE:
			integer = atoi(str.c_str());
			convertInt(integer);
			break ;
		case FLOAT_TYPE:
			f = strtof(str.c_str(), NULL);
			convertFloat(f, str);
			break ;
		case DOUBLE_TYPE:
			d = strtod(str.c_str(), NULL);
			convertDouble(d, str);
			break ;
		default:
			// print error
			break ;
		
	}
	
}