/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:49:50 by jaristil          #+#    #+#             */
/*   Updated: 2024/02/15 16:26:48 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Span.hpp"

/* ************************************************************************** */
/*                     Constructeurs & Destructeurs                   		  */
/* ************************************************************************** */

Span::Span() : _N(0) {

	std::cout << _YELLOW "Default Constructor called: Span" _END << std::endl;
}

Span::Span(unsigned int size) : _N(size) {

	std::cout << _YELLOW "Parametric Constructor called: Span" _END << std::endl;
}

Span::Span(int size, int start) : _N(size) {
	
	Generate		fill(start, std::numeric_limits<int>::max() - _N);
	for (unsigned int i = 0; i < _N; i++)
	{
		_numbers.push_back(fill());
	}
}

Span::Span(Span const &src) : _N(src._N), _numbers(src._numbers) {

	std::cout << _YELLOW "Copy Constructor called: Span" _END << std::endl;
}

Span::~Span() {

	std::cout << _YELLOW "Destructor called: Span" _END << std::endl;
}

/* ************************************************************************** */
/*                     Surcharges d'opérateurs                  		      */
/* ************************************************************************** */

Span&	Span::operator=(Span const &rhs) {
	
	if (this != &rhs)
	{
		_N = rhs._N;
		_numbers = rhs._numbers;
	}
	std::cout << _YELLOW "Assignment Operator called: Span" _END << std::endl;
	return (*this);
}

std::ostream& operator<<(std::ostream& o, const Span &rhs) {
	
    o << "Span: [ ";
    for (size_t i = 0; i < rhs.getNumbers().size(); ++i) 
	{
        o << rhs.getNumbers()[i];
        if (i != rhs.getNumbers().size() - 1) 
		{
            o << " | ";
        }
    }
    o << " ]";
    return (o);
}
/* ************************************************************************** */
/*                    		 Getters & Setters                  		      */
/* ************************************************************************** */

unsigned int	Span::getSize() const {

	return (this->_N);
}

const std::vector<int> &Span::getNumbers() const {
	
        return (_numbers);
    }

/* ************************************************************************** */
/*                   			  Méthodes                 		              */
/* ************************************************************************** */

void	Span::addNumber(unsigned int num) {

	if (_numbers.size() >= _N)
		throw std::runtime_error(_RED "Span is full" _END);
	_numbers.push_back(num);
}

void	Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end) {

	if (_numbers.size() + std::distance(begin, end) > _N)
		throw std::runtime_error(_RED "Adding these numbers exceeds Span capacity." _END);
	_numbers.insert(_numbers.end(), begin, end);	
}

unsigned int Span::shortestSpan() const {
	
    if (_numbers.size() <= 1)
        throw std::runtime_error(_RED "Cannot find span with less than 2 numbers." _END);
    
    std::vector<int> sorted = _numbers;
    std::sort(sorted.begin(), sorted.end());

    // Initialise res avec une valeur maximale possible
    int res = std::numeric_limits<int>::max();
    // Parcours des éléments triés pour trouver la plus petite différence
    for (size_t i = 0; i < sorted.size() - 1; ++i) {
        if (std::abs(sorted[i + 1] - sorted[i]) < res) {
            res = std::abs(sorted[i + 1] - sorted[i]);
        }
    }

    return (res);
}

unsigned int Span::longestSpan() const {
	
    if (_numbers.size() <= 1)
        throw std::runtime_error(_RED "Cannot find span with less than 2 numbers." _END);
		
    std::vector<int> sorted = _numbers;
    std::sort(sorted.begin(), sorted.end());
	
    int res = std::abs(sorted.back() - sorted.front());
    return (res);
}
