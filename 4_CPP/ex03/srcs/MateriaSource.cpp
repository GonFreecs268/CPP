/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 20:08:26 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/26 20:08:26 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "Default constructor called for MateriaSource" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
	std::cout << "Copy constructor called for MateriaSource" << std::endl;
}

MateriaSource&	MateriaSource::operator=(MateriaSource const & rhs)
{
	std::cout << "Assignment operator called for MateriaSource" << std::endl;
	return *this;
}

MateriaSource::~MateriaSource()
{
	std::cout << "Destructor called for MateriaSource" << std::endl;
}


