/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 17:19:54 by jaristil          #+#    #+#             */
/*   Updated: 2024/02/21 15:49:40 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#define SUCCESS 0
#define FAILURE 1

#include <iostream>
#include <string>
#include <stack>
#include <sstream> // istringstream
#include <cctype>
#include <algorithm>
#include "colors.hpp"


class RPN
{
	public:

	// Constructeurs & Destructeurs
    RPN();
    ~RPN();

	// Surcharge d'opérateurs
    RPN& operator=(RPN const &rhs);

	// Getters & Setters
	
	// Méthodes
	int	evaluate(const std::string &expression);	
	
	// Exception

	private:

	std::stack<int>	_stack;
    
	RPN(RPN const &src);

	bool	isOperator(char c);
	int		operate(char op, int a, int b);
};
