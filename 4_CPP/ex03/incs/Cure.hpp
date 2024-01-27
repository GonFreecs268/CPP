/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 18:25:57 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/27 15:30:04 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

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

class Cure : public AMateria
{
	public:

    Cure();
    Cure(Cure const & src);
    ~Cure();
	
    Cure& operator=(Cure const &src);

	virtual AMateria*			clone() const;
	virtual void				use(ICharacter& target);
};

#endif

