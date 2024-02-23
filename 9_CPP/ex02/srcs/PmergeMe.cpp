/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:55:52 by jaristil          #+#    #+#             */
/*   Updated: 2024/02/23 19:20:48 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/PmergeMe.hpp"

/* ************************************************************************** */
/*                     Constructeurs & Destructeurs                   		  */
/* ************************************************************************** */

PmergeMe::PmergeMe() {

	std::cout << _YELLOW "Default Constructor called: PmergeMe" _END << std::endl;
}


PmergeMe::PmergeMe(PmergeMe const &src) {

	std::cout << _YELLOW "Copy Constructor called: PmergeMe" _END << std::endl;
	*this = src;
}

PmergeMe::~PmergeMe() {

	std::cout << _YELLOW "Destructor called: PmergeMe" _END << std::endl;
}

/* ************************************************************************** */
/*                     Surcharges d'opérateurs                  		      */
/* ************************************************************************** */

PmergeMe&	PmergeMe::operator=(PmergeMe const &rhs) {
	
	std::cout << _YELLOW "Assignment Operator called: PmergeMe" _END << std::endl;
	if (this != &rhs)
	{
		_Vsort = rhs._Vsort;
		_Dsort = rhs._Dsort;
	}
	return (*this);
}

/* ************************************************************************** */
/*                    		 Getters & Setters                  		      */
/* ************************************************************************** */

size_t	PmergeMe::getSize() const {

	return (_Vsort.size());
}

int	PmergeMe::getElement(size_t index) const {

	if (index < _Vsort.size())
		return (_Vsort[index]);
	else
		return -1;
		// throw here
}

/* ************************************************************************** */
/*                   			  Méthodes                 		              */
/* ************************************************************************** */

void	PmergeMe::addElement(int value) {

	_Vsort.push_back(value);
}

bool	PmergeMe::isInt(std::string str) const {
	size_t	i = 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (isdigit(str[i]))
		i++;
	if (i == str.length())
		return (true);
	return (false);
}

unsigned int	PmergeMe::Jacobsthal(unsigned int n) {

	// 1st terne de la suite
	if (n == 0)
		return (0);
	// 2nd terme de la suite
	else if (n == 1)
		return (1);
	// recursion until cas 0/1
	else
		return Jacobsthal(n -1) + 2 * Jacobsthal(n - 2);
}

// pernet de trier le ss vecteur
void	PmergeMe::ford_johnson_vector(int start, int end) {

	// if not then the vector only contain 1 or 0 elem
	if (start < end)
	{
		int	middle = start + (end - start) / 2;
		ford_johnson_vector(start, middle);
		ford_johnson_vector(middle + 1, end);
		
		int index = Jacobsthal(end - start + 1) - 1;
		_Vsort.insert(_Vsort.begin() + index, _Vsort[middle]);
		
		if (index < middle)
			_Vsort.erase(_Vsort.begin() + middle + 1);
		else
			_Vsort.erase(_Vsort.begin() + middle);
	}
}

void	PmergeMe::ford_johnson_vector() {

	if (_Vsort.size() > 1)
		ford_johnson_vector(0, _Vsort.size() - 1);
}

/* ************************************************************************** */
/*                   			  Exception                 		          */
/* ************************************************************************** */


