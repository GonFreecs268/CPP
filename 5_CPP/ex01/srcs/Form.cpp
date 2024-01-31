/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:38:41 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/31 13:42:22 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Form.hpp"

Form::Form() : _name(""), _is_signed(false), _grade(1), _execute_grade(1) {

	std::cout << _YELLOW "Default Constructor called: Form" _END << std::endl;
}

Form::Form(std::string const name, unsigned int const grade, unsigned int const exec_grade) :
_name(name), _is_signed(false), _grade(grade), _execute_grade(exec_grade) {
	
	if (grade < 1 || exec_grade < 1 )
		throw Form::GradeTooHighException();
	else if (grade > 150 || exec_grade > 150)
		throw Form::GradeTooLowException();
	std::cout << _YELLOW "Parametric Constructor called: Form" _END << std::endl;
}

Form::Form(Form const &src) : _name(src.getName()), _is_signed(src.getIsSigned()),
_grade(src.getGrade()), _execute_grade(src.getExecuteGrade()) {
	
	std::cout << _YELLOW "Copy Constructor called: Form" _END << std::endl;
}

Form::~Form() {

	std::cout << _YELLOW "Destructor called: Form" _END << std::endl;
}

Form&	Form::operator=(Form const &rhs) {
	
	if (this != &rhs)
		_is_signed = rhs._is_signed;
	std::cout << _YELLOW "Assignment Operator called: Form" _END << std::endl;
	return (*this);
}

std::ostream & operator<<(std::ostream & o, Form const &rhs) {
	
	o << "Form " << rhs.getName() << (rhs.getIsSigned() ? " (signed) | " : " (not signed) | ")
	<< "Grade required to sign: "<< rhs.getGrade() << " | Grade required to execute: "
	<< rhs.getExecuteGrade();
	
	return (o);
}

std::string const	&Form::getName() const {

	return (this->_name);
}

unsigned int	Form::getGrade() const {

	return (this->_grade);		
}

unsigned int	Form::getExecuteGrade() const {

	return (this->_execute_grade);
}

bool	Form::getIsSigned() const {

	return (this->_is_signed);
}

const char *Form::GradeTooHighException::what() const throw() {
	
	return (_RED "FORM GRADE TO HIGH !" _END);
}

const char *Form::GradeTooLowException::what() const throw() {
	
	return (_RED "FORM GRADE TO LOW !" _END);
}

const char *Form::AlreadySigned::what() const throw() {

	return (_RED "FORM ALREADY SIGNED" _END);
}


void	Form::beSigned(Bureaucrat const &to_sign)
{
	if (this->_is_signed == true)
		throw Form::AlreadySigned();
	else if (to_sign.getGrade() <= this->_grade)
		this->_is_signed = true;
	else
		throw Form::GradeTooLowException();
}
