/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:09:15 by jaristil          #+#    #+#             */
/*   Updated: 2024/02/01 14:46:49 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "colors.hpp"
#include "AForm.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public AForm
{
	public:

    ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(ShrubberyCreationForm const &src);
    virtual ~ShrubberyCreationForm();

    virtual ShrubberyCreationForm& 	operator=(ShrubberyCreationForm const &rhs);
	
	std::string const		&getTarget() const;
	
	// not sure to have to virtual here
	void					execute(Bureaucrat const &executor) const;
	
	class FileCreationException : public std::exception
	{	
		public:
			virtual const char *what() const throw();
	};

	private:

	std::string	_target;
};
