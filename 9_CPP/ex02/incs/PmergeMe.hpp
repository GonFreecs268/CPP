/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:55:52 by jaristil          #+#    #+#             */
/*   Updated: 2024/03/01 17:26:58 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#define FAILURE 1
#define SUCCESS 0

#include <iostream>
#include <string>
#include <cstdlib> // std::atoi
#include "colors.hpp"
#include <vector>
#include <deque>
#include <iterator>
#include <set>
#include <limits.h>
#include <sys/time.h> // gettimeoftheday

class PmergeMe
{
	public :

	// Constructeurs & Destructeurs
    PmergeMe();
    PmergeMe(PmergeMe const &src);
    ~PmergeMe();

	// Surcharge d'opérateurs
    PmergeMe& operator=(PmergeMe const &rhs);

	// Getters & Setters
	// size_t			getSize() const;
	// int				getElement(size_t index) const;
	
	// Méthodes
	// bool			isInt(std::string str) const;
	
	void			addElement(int value);

	void			sort_and_print();
	
	// Exception
	
	private :

	std::vector<int>	_Vsort;
	std::deque<int>		_Dsort;
	
	
	unsigned int	jacobsthal(unsigned int n);

	void			binarySearchInsert(std::deque<int> &container, int value);
	void			binarySearchInsert(std::vector<int> &container, int value);
	
	void			ford_johnson_vector(std::vector<int> &Vsort);
	void			ford_johnson_deque(std::deque<int> &Dsort);

	void			ford_johnson_vector();
	void			ford_johnson_deque();


	void			print_sequence(const std::string &message, const std::vector<int> &vec) const;
	void			print_sequence(const std::string &message, const std::deque<int> &deq) const;
	
};

std::ostream& operator<<(std::ostream &o, const PmergeMe &rhs);
