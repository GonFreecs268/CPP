/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 14:59:51 by jaristil          #+#    #+#             */
/*   Updated: 2024/02/06 21:10:22 by jaristil         ###   ########.fr       */
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

bool	ScalarConverter::isChar(std::string str) {

	if (str.length() == 1 && !isdigit(str[0]))
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

	printChar(c);
	printInt(static_cast<int>(c));
	printFloat(static_cast<float>(c));
	printDouble(static_cast<double>(c));
}

void	ScalarConverter::convertInt(int integer, const std::string &str) {

	(void)str;
	if (integer >= (INT_MIN + 1) && integer <= INT_MAX)
	{
		if ((integer < 127 && integer >= -128) && isprint(integer))
		{
			printChar(integer);
		}
		else if (integer > 255 || integer < 0)
			print_error("char");
		else
		{
			std::cout << _RED "char: Non displayable" _END << std::endl;
		}
		printInt(static_cast<int>(integer));
		printFloat(static_cast<float>(integer));
		printDouble(static_cast<double>(integer));
	}
	else
	{
		print_error("char OVERFLOW");
		print_error("int OVERFLOW");
		print_error("float OVERFLOW");
		print_error("double OVERFLOW");
	}
}

void	ScalarConverter::convertFloat(double d, const std::string &str) {
    
	float	f = static_cast<float>(d);

	if (std::isinf(f) || std::isnan(f))
	{
		std::cout << _RED "char : impossible" _END << std::endl;
		std::cout << _RED "int : impossible" _END << std::endl;
		std::cout << _FOREST_GREEN "float: " << str << std::endl;
		// std::string doubleStr = str.substr(0, str.length() - 1);
		// std::cout << _FOREST_GREEN "double: " << doubleStr << std::endl;
		std::cout << _FOREST_GREEN "double: " << static_cast<double>(f) << std::endl;	
	}
	else
	{
		if ((static_cast<int>(f) < 127 && static_cast<int>(f) >= -128) && isprint(static_cast<int>(f)))
    		printChar(static_cast<char>(f));
		else if (static_cast<int>(f) > 255 || static_cast<int>(f) < 0)
			print_error("char");
		else
			std::cout << _RED "char: Non displayable" _END << std::endl;
		if (f > static_cast<float>(INT_MAX) || f < static_cast<float>(INT_MIN))
			print_error("int");
		else
		{
			if (d > static_cast<double>(INT_MAX) || d < static_cast<double>(INT_MIN))
				print_error("int");
			else
				printInt(static_cast<int>(d));
		}
    	printFloat(f);
    	printDouble(static_cast<double>(f));
	}
}

// std::cerr << "THE FLOAT IN INT : " << f << std::endl;
// std::cerr << "INT_MAX : " << static_cast<float>(INT_MAX) << std::endl;
// std::cerr << "INT_MIN : " << static_cast<float>(INT_MIN) << std::endl;

void	ScalarConverter::convertDouble(double d, const std::string &str) {

	std::string lowercaseStr = str;
	for (size_t i = 0; i < lowercaseStr.length(); i++)
	{
		lowercaseStr[i] = std::tolower(lowercaseStr[i]);
	}
	if (lowercaseStr == "-inf" || lowercaseStr == "+inf" || lowercaseStr == "nan")
	{
		std::cout << _RED "char : impossible" _END << std::endl;
		std::cout << _RED "int : impossible" _END << std::endl;
		std::cout << _FOREST_GREEN "float: " << str + 'f' << _END << std::endl;
		std::cout << _FOREST_GREEN "double: " << str << _END << std::endl;
	}
	else
	{
    	printChar(static_cast<char>(d));
    	printInt(static_cast<int>(d));
    	printFloat(static_cast<float>(d));
    	printDouble(d);
	}
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
	switch(type)
	{
		case CHAR_TYPE:
			convertChar(str[0]);
			break ;
		case INT_TYPE:
			convertInt(static_cast<int>(strtod(str.c_str(), NULL)), str);
			break ;
		case FLOAT_TYPE:
			convertFloat(strtod(str.c_str(), NULL), str);
			break ;
		case DOUBLE_TYPE:
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
