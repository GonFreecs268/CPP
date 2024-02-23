/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 17:19:54 by jaristil          #+#    #+#             */
/*   Updated: 2024/02/21 15:50:07 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/RPN.hpp"

/* ************************************************************************** */
/*                     Constructeurs & Destructeurs                   		  */
/* ************************************************************************** */

RPN::RPN() {

	// std::cout << _YELLOW "Default Constructor called: RPN" _END << std::endl;
}


RPN::RPN(RPN const &src) {

	// std::cout << _YELLOW "Copy Constructor called: RPN" _END << std::endl;
	*this = src;
}

RPN::~RPN() {

	// std::cout << _YELLOW "Destructor called: RPN" _END << std::endl;
}

/* ************************************************************************** */
/*                     Surcharges d'opérateurs                  		      */
/* ************************************************************************** */

RPN&	RPN::operator=(RPN const &rhs) {
	
	(void)rhs;
	// std::cout << _YELLOW "Assignment Operator called: RPN" _END << std::endl;
	return (*this);
}

/* ************************************************************************** */
/*                   			  Méthodes                 		              */
/* ************************************************************************** */

static int my_stoi(std::string &s) {

	int i;
	std::istringstream(s) >> i;

	return (i);
}

bool RPN::isOperator(char c) {
		
        return (c == '+' || c == '-' || c == '*' || c == '/');
    }
    
int RPN::operate(char op, int a, int b) {
	
        switch (op) 
		{
            case '+':
                return (a + b);
            case '-':
                return (a - b);
            case '*':
                return (a * b);
            case '/':
                if (b == 0) 
                    throw std::invalid_argument("Division by zero");                
                return (a / b);
            default:
                throw std::invalid_argument("Invalid operator: " + std::string(1, op));
        }
}

int RPN::evaluate(const std::string& expression) {
	
		// expression comme une sequence de token (mots)
        std::istringstream ss(expression);

		// pour sotcker chaque token extrait de expression
        std::string token;
        
        while (ss >> token) 
		{
			// it is an operand
            if (std::isdigit(token[0])) 
			{
                _stack.push(my_stoi(token));
            } 
			else if (isOperator(token[0]) && _stack.size() >= 2) 
			{
                int secondOperand = _stack.top();
                _stack.pop();
                int firstOperand = _stack.top();
                _stack.pop();
                _stack.push(operate(token[0], firstOperand, secondOperand));
            } 
			else 
			{
                throw std::invalid_argument("Invalid input: " + token);
            }
        }
        
        if (_stack.size() != 1 || _stack.empty())
		{
            throw std::invalid_argument("Invalid input: insufficient operands or operators");
        }
        
        return (_stack.top());
    }
    