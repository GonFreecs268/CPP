/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:55:52 by jaristil          #+#    #+#             */
/*   Updated: 2024/02/28 18:07:16 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/PmergeMe.hpp"

int main(int ac, char **av) {

	try
	{
		if (ac < 2)
		{
			std::cout << _RED "Usage: " << av[0] << " <sequence of positive integers>" _END << std::endl;
			return (FAILURE);
		}

		// Check for dupplicate or invalid numbers
		std::set<int> numbers;
		for (int i = 1; i < ac; i++)
		{
			char *ptr;
			long num = std::strtol(av[i], &ptr, 10);
			if (*ptr != '\0' || num <= 0 || num > INT_MAX)
			{
				std::cout << _RED "Error : Invalid input, please provide only positive integers." << _END << std::endl;
				return (FAILURE);
			}

			if (numbers.find(num) != numbers.end())
				throw std::runtime_error("Error: Duplicate numbers detected.");
			numbers.insert(num);
		}
		
		PmergeMe Pm;

		for (int i = 1; i < ac; i++)
		{
			int	num = std::atoi(av[i]);
			Pm.addElement(num);
		}
		
		Pm.sort_and_print();
	}
	catch(const std::exception& e)
	{
		std::cout << _RED << e.what() << _END << '\n';
	}
	
	return (SUCCESS);
}

