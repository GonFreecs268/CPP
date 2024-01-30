/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:38:41 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/30 19:04:56 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:

    Form();
	Form(std::string const name, unsigned int const grade, unsigned int const exec_grade);
    Form(Form const &src);
    ~Form();

    Form& operator=(Form const &rhs);

	std::string const	&getName() const;
	unsigned int		getGrade() const;
	unsigned int		getExecuteGrade() const;
	bool				getIsSigned() const;

	void				beSigned(Bureaucrat const &to_sign);

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

	std::string const 	_name;
	bool				_is_signed;
	unsigned int const 	_grade;
	unsigned int const	_execute_grade;
};

std::ostream& operator<<(std::ostream &o, Form const &rhs);
