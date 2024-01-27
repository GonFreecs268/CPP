/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 20:08:26 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/27 19:40:33 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <iostream>
#include <string>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"

class MateriaSource : public IMateriaSource
{
	public:

    MateriaSource();
    MateriaSource(MateriaSource const &src);
    virtual ~MateriaSource(); // not sure to virtual
	
    MateriaSource& operator=(MateriaSource const &src);

	virtual void 				learnMateria(AMateria*);
	virtual AMateria* 			createMateria(std::string const & type);
	
	int							getNbMaterias() const;
	
	private:

	AMateria	*_inventory[4];
	int			_nbMaterias;
};

#endif

