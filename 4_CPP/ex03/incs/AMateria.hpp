/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 18:18:01 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/26 16:45:37 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include <sstream>
#include <unistd.h>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <string.h>
#include "colors.hpp"
#include "ICharacter.hpp"

class AMateria
{
	public:

    AMateria();
	AMateria(std::string const &type);
    AMateria(const AMateria &src);
    AMateria& operator=(const AMateria &src);
    ~AMateria();

	std::string const &getType() const;
	void	setType(std::string type);

	virtual AMateria *clone() const = 0; //no need to declare inside AMetaria
	virtual void	use(ICharacter &target);
	
	protected:
	
	std::string	_type;
};

#endif

