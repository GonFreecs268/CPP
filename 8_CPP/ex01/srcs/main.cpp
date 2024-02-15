/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:49:50 by jaristil          #+#    #+#             */
/*   Updated: 2024/02/15 18:09:55 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Span.hpp"

int main()
{
	try
	{
		try
		{
			std ::cout << _SILVER "TEST GIVING BY THE EXERCISE\n" _END << std::endl;
			
			Span sp = Span(5);
		
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(9);
			sp.addNumber(17);
			sp.addNumber(11);	

			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << "-----------------------------------------------" << std::endl;
		try
		{
			std ::cout << _SILVER "TEST FULL SPAN\n" _END << std::endl;

			Span sp1 = Span(2);
			
			sp1.addNumber(10);
			sp1.addNumber(15);
			sp1.addNumber(100); // should throw an exception
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << "-----------------------------------------------" << std::endl;
		try
		{
			std ::cout << _SILVER "TEST NO DISTANCE AVAILABLE SPAN\n" _END << std::endl;

			Span sp3 = Span(1);
			
			// should make an exception
			std::cout << sp3.shortestSpan() << std::endl;

		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << "-----------------------------------------------" << std::endl;
		try
		{
			std ::cout << _SILVER "TEST WITH ITERATOR PLAGE\n" _END << std::endl;

			Span sp4 = Span(5);
	        std::vector<int> numbersToAdd;
	        numbersToAdd.push_back(6);
	        numbersToAdd.push_back(3);
	        numbersToAdd.push_back(9);
	        numbersToAdd.push_back(17);
	        numbersToAdd.push_back(11);
	        sp4.addNumber(numbersToAdd.begin(), numbersToAdd.end());
			
        	std::cout << _FOREST_GREEN << sp4.shortestSpan() << _END << std::endl;
        	std::cout << _FOREST_GREEN << sp4.longestSpan() << _END << std::endl;

		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << "-----------------------------------------------" << std::endl;
		try
		{
				std ::cout << _SILVER "TEST FOR 10 000\n" _END << std::endl;

				srand(time(NULL));
				Span sp(10000, 1000);
				// std::cout << sp << std::endl; // if you want to print the vector
				std::cout << sp.shortestSpan() << std::endl;
				std::cout << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}
