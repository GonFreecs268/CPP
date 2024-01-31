/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:38:41 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/31 13:39:08 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

class Bureaucrat;

class AForm
{
	public:

    AForm();
	AForm(std::string const name, unsigned int const grade, unsigned int const exec_grade);
    AForm(AForm const &src);
    virtual ~AForm();

    virtual AForm& operator=(AForm const &rhs);

	std::string const	&getName() const;
	unsigned int		getGrade() const;
	unsigned int		getExecuteGrade() const;
	bool				getIsSigned() const;

	void				beSigned(Bureaucrat const &to_sign);
	virtual void		execute(Bureaucrat const &executor) const = 0;
	void				check_execute(Bureaucrat const &executor) const;

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
	class AlreadySigned : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
	class NotSigned : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	class ExecutionFailed : public std::exception
	{	
		public:
			virtual const char *what() const throw();
	};

	private:

	std::string const 	_name;
	bool				_is_signed;
	unsigned int const 	_grade;
	unsigned int const	_execute_grade;
};

std::ostream& operator<<(std::ostream &o, AForm const &rhs);
