/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:10:12 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/31 17:18:30 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "colors.hpp"
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	public:

    PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
    PresidentialPardonForm(PresidentialPardonForm const &src);
    virtual ~PresidentialPardonForm();

    virtual PresidentialPardonForm& operator=(PresidentialPardonForm const &rhs);
	
	std::string const 				&getTarget() const;

	virtual void					execute(Bureaucrat const & executor) const;
	
	private:

	std::string	_target;
};

std::ostream & operator<<(std::ostream & o, PresidentialPardonForm const &rhs);
