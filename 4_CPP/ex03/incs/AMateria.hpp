/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 18:18:01 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/27 15:45:28 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include <string>
#include <string.h>
#include "colors.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"

class ICharacter;

class AMateria
{
	public:

    AMateria();
	AMateria(std::string const &type);
    AMateria(const AMateria &src);
    virtual ~AMateria();
	
    AMateria& operator=(const AMateria &src);

	std::string const &getType() const;
	void	setType(std::string type);

	virtual AMateria *clone() const = 0;
	virtual void	use(ICharacter &target);
	
	protected:
	
	std::string	_type;
};

#endif

