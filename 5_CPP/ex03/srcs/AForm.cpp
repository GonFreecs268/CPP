/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:38:41 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/31 13:42:22 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/AForm.hpp"

AForm::AForm() : _name(""), _is_signed(false), _grade(1), _execute_grade(1) {

	std::cout << _YELLOW "Default Constructor called: AForm" _END << std::endl;
}

AForm::AForm(std::string const name, unsigned int const grade, unsigned int const exec_grade) :
_name(name), _is_signed(false), _grade(grade), _execute_grade(exec_grade) {
	
	if (grade < 1 || exec_grade < 1 )
		throw AForm::GradeTooHighException();
	else if (grade > 150 || exec_grade > 150)
		throw AForm::GradeTooLowException();
	std::cout << _YELLOW "Parametric Constructor called: AForm" _END << std::endl;
}

AForm::AForm(AForm const &src) : _name(src.getName()), _is_signed(src.getIsSigned()),
_grade(src.getGrade()), _execute_grade(src.getExecuteGrade()) {
	
	std::cout << _YELLOW "Copy Constructor called: AForm" _END << std::endl;
}

AForm::~AForm() {

	std::cout << _YELLOW "Destructor called: AForm" _END << std::endl;
}

AForm&	AForm::operator=(AForm const &rhs) {
	
	if (this != &rhs)
		_is_signed = rhs._is_signed;
	std::cout << _YELLOW "Assignment Operator called: AForm" _END << std::endl;
	return (*this);
}

std::ostream & operator<<(std::ostream & o, AForm const &rhs) {
	
	o << "AForm " << rhs.getName() << (rhs.getIsSigned() ? " (signed) | " : " (not signed) | ")
	<< "Grade required to sign: "<< rhs.getGrade() << " | Grade required to execute: "
	<< rhs.getExecuteGrade();
	
	return (o);
}

std::string const	&AForm::getName() const {

	return (this->_name);
}

unsigned int	AForm::getGrade() const {

	return (this->_grade);		
}

unsigned int	AForm::getExecuteGrade() const {

	return (this->_execute_grade);
}

bool	AForm::getIsSigned() const {

	return (this->_is_signed);
}

const char *AForm::GradeTooHighException::what() const throw() {
	
	return (_RED "AForm GRADE TO HIGH !" _END);
}

const char *AForm::GradeTooLowException::what() const throw() {
	
	return (_RED "AForm GRADE TO LOW !" _END);
}

const char *AForm::AlreadySigned::what() const throw() {

	return (_RED "AForm ALREADY SIGNED" _END);
}

const char *AForm::NotSigned::what() const throw() {

	return (_RED "AForm NOT signed" _END);
}

const char *AForm::ExecutionFailed::what() const throw() {

	return (_RED "EXECUTE FAILED" _END);
}

void	AForm::beSigned(Bureaucrat const &to_sign)
{
	if (this->_is_signed == true)
		throw AForm::AlreadySigned();
	else if (to_sign.getGrade() <= this->_grade)
		this->_is_signed = true;
	else
		throw AForm::GradeTooLowException();
}

void	AForm::check_execute(Bureaucrat const &executor) const {

	if (this->getIsSigned() == false)
		throw AForm::NotSigned();
	else if (this->getExecuteGrade() < executor.getGrade())
		throw Bureaucrat::GradeTooLowException();
}
