/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 18:25:57 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/26 16:04:25 by jaristil         ###   ########.fr       */
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
    Cure& operator=(Cure const &src);
    ~Cure();

	AMateria*	clone() const;
	void				use(ICharacter& target);
};

#endif

