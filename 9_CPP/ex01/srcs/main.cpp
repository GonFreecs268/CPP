/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 17:19:54 by jaristil          #+#    #+#             */
/*   Updated: 2024/02/21 14:55:20 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/RPN.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << _RED "Error : Invalid number of argument." _END << std::endl;
		return (FAILURE);
	}
	else
	{
		try
		{
			std::string	expression = av[1];
			
			RPN rpn;
			
			int res = rpn.evaluate(expression);

			std::cout << _FOREST_GREEN "Result : " << res << _END << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << _RED <<  e.what() << _END << '\n';
			return (FAILURE);
		}
		
	}
	return (SUCCESS);
}


