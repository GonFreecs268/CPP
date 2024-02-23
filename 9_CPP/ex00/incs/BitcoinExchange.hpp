/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 18:30:36 by jaristil          #+#    #+#             */
/*   Updated: 2024/02/20 17:35:19 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#define SUCCESS 0
#define FAILURE 1

#include <iostream>
#include <string>
#include "colors.hpp"
#include <map> // map
#include <iterator> // iterator
#include <fstream> // ifstream
#include <algorithm> // find
#include <sstream> // 
#include <limits>

class BitcoinExchange
{
	public:

	// Constructeurs & Destructeurs
	BitcoinExchange(std::string input);
    ~BitcoinExchange();

	// Surcharge d'opérateurs
    BitcoinExchange& operator=(BitcoinExchange const &rhs);
	
	// Méthodes
	void	exchange();
	
	// Exception
	
	class OpenFile : public std::exception
	{
		public :
			virtual const char *what() const throw();
	};
	
	class WrongDate : public std::exception
	{
		public :
			virtual const char *what() const throw();
	};

	class WrongValue : public std::exception
	{
		public :
			virtual const char *what() const throw();
	};

		class WrongValueSign : public std::exception
	{
		public :
			virtual const char *what() const throw();
	};
	
	private:
	
	std::map<std::string, float>	_btc;
	std::string						_input;
		
    BitcoinExchange(BitcoinExchange const &src);
	
	// Méthodes
	void	checkData();
	void	checkDate(const	std::string &data);
	
	template< typename T>
	void	checkValue(T &value);

	bool	checkLine(const std::string &line, std::string &date, float &value);
};

























// class BitcoinExchange {
	
// private:
// 	std::map<std::string,float> _btc;
// 	std::map<std::string, float>::iterator _findDate(const std::string& date);
// 	void _checkDate(const std::string& date);
// 	void _checkRate(const std::string& rate);
// 	void _printOutput(const std::string& key, const std::string& value);
// 	bool _isInt(const std::string& str);
// 	bool _isFloat(const std::string& str);

// public:
// 	BitcoinExchange( void );
// 	BitcoinExchange( BitcoinExchange const &rhs );
// 	~BitcoinExchange( void );
// 	BitcoinExchange &operator=( const BitcoinExchange &rhs);

// 	void checkExchange(char *str);

// 	class FileException : public std::exception {
// 	public:
// 		virtual const char* what() const throw();
// 	};

// 	class DateException {
// 	private:
// 		std::string _errorMessage;
// 	public:
// 	    DateException(const std::string& message) : _errorMessage("Error: bad input => " + message) {}
// 		virtual const char* what() const throw();
// 	};

// 	class RateException {
// 	private:
// 		std::string _errorMessage;
// 	public:
// 	    RateException(const std::string& message) : _errorMessage("Error: " + message) {}
// 		virtual const char* what() const throw();
// 	};
// };
