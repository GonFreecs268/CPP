/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:55:52 by jaristil          #+#    #+#             */
/*   Updated: 2024/02/23 19:18:44 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "colors.hpp"
#include <vector>
#include <deque>

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
	size_t			getSize() const;
	int				getElement(size_t index) const;
	
	// Méthodes
	bool			isInt(std::string str) const;
	
	void			addElement(int value);
	
	unsigned int	Jacobsthal(unsigned int n);
	void			ford_johnson_vector(int start, int end);
	void			ford_johnson_vector();

	
	// Exception
	
	private :

	std::vector<int>	_Vsort;
	std::deque<int>		_Dsort;
};

