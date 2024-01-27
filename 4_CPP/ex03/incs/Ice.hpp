/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 18:19:57 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/27 19:39:59 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include <iostream>
#include <sstream>
#include <unistd.h>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <string.h>
#include "AMateria.hpp"

class Ice : public AMateria
{	
	public:

    Ice();
	Ice(std::string const &type);
    Ice(const Ice & src);
    Ice& operator=(Ice const & hrs);
    ~Ice();

	// not sure need virtual because Amateria is virtual too
	virtual AMateria*			clone() const;
	void				use(ICharacter& target);
};

#endif