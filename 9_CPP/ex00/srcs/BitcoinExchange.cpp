/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 18:30:36 by jaristil          #+#    #+#             */
/*   Updated: 2024/03/01 18:10:53 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/BitcoinExchange.hpp"

/* ************************************************************************** */
/*                     Constructeurs & Destructeurs                   		  */
/* ************************************************************************** */

BitcoinExchange::BitcoinExchange(std::string input)
{
	std::ifstream file(input.c_str());
	if (!file.is_open() || file.eof())
		throw OpenFile();
	file.close();

	_input = input;
	checkData();
}

void	BitcoinExchange::checkData() {

	std::cout << _YELLOW "Default Constructor called: BitcoinExchange" _END << std::endl;
	std::ifstream file("data.csv");
	if (!file.is_open()|| file.eof())
	    throw OpenFile();
	
	std::string line;
	while (std::getline(file, line))
	{
	    std::istringstream iss(line);
	    std::string dateStr, valueStr;
	
	    if (!std::getline(iss, dateStr, ',') || !std::getline(iss, valueStr))
	        throw OpenFile();
	
	    float value;
	    std::istringstream(valueStr) >> value;
	    _btc[dateStr] = value;
	}

	file.close();
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &src) : _input(src._input) {

	std::cout << _YELLOW "Copy Constructor called: BitcoinExchange" _END << std::endl;
	*this = src;
}

BitcoinExchange::~BitcoinExchange() {

	std::cout << _YELLOW "Destructor called: BitcoinExchange" _END << std::endl;
}

/* ************************************************************************** */
/*                     Surcharges d'opérateurs                  		      */
/* ************************************************************************** */

BitcoinExchange&	BitcoinExchange::operator=(BitcoinExchange const &rhs) {
	
	std::cout << _YELLOW "Assignment Operator called: BitcoinExchange" _END << std::endl;
	if (this != &rhs)
		_btc = rhs._btc;
	return (*this);
}

/* ************************************************************************** */
/*                   			  Méthodes                 		              */
/* ************************************************************************** */

int daysInMonth(int year, int month) {
	
    const int daysInMonths[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	
    if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))
        return 29;
    return daysInMonths[month];
}

void BitcoinExchange::checkDate(const std::string &date) {
	
    std::istringstream ss(date);
    char tab_pct[2];
    int year, month, day;

    if (!(ss >> year >> tab_pct[0] >> month >> tab_pct[1] >> day) || tab_pct[0] != '-' || tab_pct[1] != '-')
        throw WrongDate();

    if (year < 2009 || year > 2024 || month < 1 || month > 12 || day < 1 || day > daysInMonth(year, month))
        throw WrongDate();

    if (year == 2024 && month > 2 && day > 17)
        throw WrongDate();
}

template< typename T>
void	BitcoinExchange::checkValue(T &value) {

	if (value > 1000)
		throw WrongValue();
	if (value <= 0)
		throw WrongValueSign();
}

bool BitcoinExchange::checkLine(const std::string &line, std::string &date, float &value) {


	if (line.find("date") != std::string::npos || line.empty())
		return (false);
		
	std::istringstream ss(line);
	std::getline(ss, date, ' ');
    try 
	{
        checkDate(date);
        if (ss.eof() || ss.bad())
            return (false);
        ss.ignore(std::numeric_limits<std::streamsize>::max(), '|');
        ss.ignore(std::numeric_limits<std::streamsize>::max(), ' ');
		
        if (!(ss >> value))
			throw std::invalid_argument(_RED "No value found after the date" _END);
        checkValue(value);
    } 
	catch (const std::exception &e) 
	{
        std::cout << e.what() << '\n';
        return (false);
    }

    return (true);
}

void BitcoinExchange::exchange() {
	
    std::ifstream input(_input.c_str());
    std::string line;
    std::string date;
    float value;

    while (std::getline(input, line)) 
	{
        try 
		{
            if (!checkLine(line, date, value))
                continue;
            std::cout << date << " => ";
            std::map<std::string, float>::iterator it = _btc.upper_bound(date);
			// if (it == _btc.end())
			// 	std::cout << "Date not found, using closest previous date" << std::endl;
            it--;
            std::cout << value << " = " << (it->second * value) << std::endl;
        } 
		catch (const std::exception &e) 
		{
            std::cout << e.what() << '\n';
        }
    }
    input.close();
}

/* ************************************************************************** */
/*                   			  Exception                 		          */
/* ************************************************************************** */

const char *BitcoinExchange::OpenFile::what() const throw() {

	return (_RED "Error: File cannot be opened." _END);
}

const char *BitcoinExchange::WrongDate::what() const throw() {

	return (_RED "Error: bad input when reading date" _END);
}

const char *BitcoinExchange::WrongValue::what() const throw() {

	return (_RED "Error: too large a number." _END);
}

const char *BitcoinExchange::WrongValueSign::what() const throw() {

	return (_RED "Error: not a positive number." _END);
}
