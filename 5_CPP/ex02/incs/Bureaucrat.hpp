/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 14:05:04 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/31 19:55:30 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
// #include <sstream>
#include <fstream>
#include <string>
#include "colors.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

class AForm;

class Bureaucrat
{
	public:

    Bureaucrat();
	Bureaucrat(std::string name, unsigned int grade);
    Bureaucrat(Bureaucrat const &src);
    ~Bureaucrat();

    Bureaucrat& operator=(Bureaucrat const &rhs);

	std::string const	&getName() const;
	unsigned int 		getGrade() const;

	void				IncrementGrade();
	void				IncrementGrade(unsigned int amount);
	void				DecrementGrade();
	void				DecrementGrade(unsigned int amount);

	void				signForm(AForm &AForm);
	void				executeForm(AForm const &form);
	
	class GradeTooHighException : public std::exception
	{	
		public:
			virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};

	private:

	std::string const	_name;
	unsigned int		_grade;
};

std::ostream& operator<<(std::ostream &o, Bureaucrat const &rhs);
