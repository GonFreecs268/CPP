/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 18:30:36 by jaristil          #+#    #+#             */
/*   Updated: 2024/02/20 17:23:59 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/BitcoinExchange.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << _RED "Error : could not open file." _END << std::endl;
		return (FAILURE);
	}
	else
	{
		try
		{
			BitcoinExchange Btc(static_cast<std::string>(av[1]));
			Btc.exchange();
		}
		catch (std::exception &e)
		{
			std::cout << _RED << "Error: " << e.what() << _END << std::endl;
		}
	}
	
	return (SUCCESS);
}


