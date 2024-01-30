/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 14:05:04 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/30 16:46:55 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "colors.hpp"

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
