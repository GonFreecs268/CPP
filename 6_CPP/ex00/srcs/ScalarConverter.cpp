/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 14:59:51 by jaristil          #+#    #+#             */
/*   Updated: 2024/02/05 19:18:30 by jaristil         ###   ########.fr       */
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
	// if (str.size() > 11)
	// 	throw ScalarConverter::IntOverflowException();
	if (i == str.length())
		return true;
	return false;
}

bool	ScalarConverter::isFloat(std::string str) {

	size_t strLength = str.length();
	size_t i;
	for (i = 0; i < strLength; i++)
	{
		str[i] = std::tolower(str[i]);
	}
	
	if (str == "-inff" || str == "+inff" || str == "nanf")
		return true;
			
	i = 0;
	bool decimalPoint = false;
	if (str[i] == '+' || str[i] == '-')
		i++;
 	while (isdigit(str[i]) || (str[i] == '.' && !decimalPoint)) 
	{
        if (str[i] == '.')
            decimalPoint = true;
        i++;
    }
    return (str[i] == 'f' && i + 1 == str.length());
}

bool	ScalarConverter::isDouble(std::string str) {

	size_t strLength = str.length();
	size_t i;
	for (i = 0; i < strLength; i++)
	{
		str[i] = std::tolower(str[i]);
	}
	
	if (str == "-inf" || str == "+inf" || str == "nan")
		return true;
			
	i = 0;
	bool decimalPoint = false;
	if (str[i] == '+' || str[i] == '-')
		i++;
 	while (isdigit(str[i]) || (str[i] == '.' && !decimalPoint)) 
	{
        if (str[i] == '.')
            decimalPoint = true;
        i++;
    }
	return (i == str.length());
}

void	ScalarConverter::print_error(const std::string &type) {

	std::cout << _RED << type << " : impossible" _END << std::endl;
}

void ScalarConverter::printChar(char c) {
	
	std::cout << "char : '" << c << "'" << std::endl;
}

void ScalarConverter::printInt(int integer) {
	
	std::cout << "int : " << integer << std::endl;
}

void ScalarConverter::printFloat(float f) {
	
	std::cout << "float : " << f << ".0f" << std::endl;
}

void ScalarConverter::printDouble(double d) {
	
	std::cout << "double : " << d << ".0" << std::endl;
}

void	ScalarConverter::convertChar(char c) {

	// add protection if !c need ? because switch + is char check
	printChar(c);
	printInt(static_cast<int>(c));
	printFloat(static_cast<float>(c));
	printDouble(static_cast<double>(c));
}

void	ScalarConverter::convertInt(int integer) {

	// char is >= 0 <= 255
	if (integer < 256 && isprint(integer))
	{
		printChar(static_cast<char>(integer));
	}
	else
	{
		std::cout << _RED "char: Non displayable" _END << std::endl;
	}
	printInt(integer);
	printFloat(static_cast<float>(integer));
	printDouble(static_cast<double>(integer));
}

void	ScalarConverter::convertFloat(float f, const std::string &str) {
    
	(void)str;
    printChar(static_cast<char>(f));
    printInt(static_cast<int>(f));
    printFloat(f);
    printDouble(static_cast<double>(f));
}

void	ScalarConverter::convertDouble(double d, const std::string &str) {

	(void)str;
    printChar(static_cast<char>(d));
    printInt(static_cast<int>(d));
    printFloat(static_cast<float>(d));
    printDouble(d);
}

void	ScalarConverter::convert(const std::string &str) {
		
	const int CHAR_TYPE = 0;
	const int INT_TYPE = 1;
	const int FLOAT_TYPE = 2;
	const int DOUBLE_TYPE = 3;

	int type = -1;
	bool(*Type[4])(std::string str) = {isChar, isInt, isFloat, isDouble};
	
	for (int i = 0; i < 4; i++)
	{
		if (Type[i](str))
		{	
			type = i;
			break;
		}
	}
	
	// char	c = 0;
	// int		integer = 0;
	// float	f = 0.0f;
	// double	d = 0.0;

	switch(type)
	{
		case CHAR_TYPE:
			// c = str[0];
			// convertChar(c);
			convertChar(str[0]);
			break ;
		case INT_TYPE:
			// integer = atoi(str.c_str());
			// convertInt(integer);
			convertInt(atoi(str.c_str()));
			break ;
		case FLOAT_TYPE:
			// f = strtof(str.c_str(), NULL);
			// convertFloat(f, str);
			convertFloat(strtof(str.c_str(), NULL), str);
			break ;
		case DOUBLE_TYPE:
			// d = strtod(str.c_str(), NULL);
			// convertDouble(d, str);
			convertDouble(strtod(str.c_str(), NULL), str);
			break ;
		default:
			print_error("char");
			print_error("int");
			print_error("float");
			print_error("double");
			break ;	
	}
}
