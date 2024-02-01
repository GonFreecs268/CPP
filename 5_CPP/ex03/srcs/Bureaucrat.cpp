/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 14:05:04 by jaristil          #+#    #+#             */
/*   Updated: 2024/02/01 18:30:34 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("") {
	
	std::cout << _YELLOW "Default Constructor called: Bureaucrat" _END << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : _name(name) {

	if (grade >= 1 && grade <= 150)
		_grade = grade;
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		throw Bureaucrat::GradeTooHighException();
	std::cout << _YELLOW "Parametric Constructor called: Bureaucrat" _END << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src): _name(src._name), _grade(src._grade) {
	
	std::cout << _YELLOW "Copy Constructor called: Bureaucrat" _END << std::endl;
}

Bureaucrat::~Bureaucrat() {
	
	std::cout << _YELLOW "Destructor called: Bureaucrat" _END << std::endl;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &rhs) {
	
	if (this != &rhs)
		_grade = rhs._grade;
	return (*this);
}

std::ostream& operator<<(std::ostream &o, Bureaucrat const &rhs) {
	
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
	return (o);
}

std::string const	&Bureaucrat::getName() const {

	return (this->_name);
}

unsigned int	Bureaucrat::getGrade() const {

	return (this->_grade);
}

void	Bureaucrat::IncrementGrade() {

	if (_grade > 1)
		_grade--;
	else
		throw Bureaucrat::GradeTooHighException();	
}

void	Bureaucrat::IncrementGrade(unsigned int amount) {

	if (_grade + amount <= 150)
		_grade -= amount;
	else
		throw Bureaucrat::GradeTooHighException();
}

void	Bureaucrat::DecrementGrade() {

	if (_grade < 150)
		_grade++;
	else
		throw Bureaucrat::GradeTooLowException();
}

void	Bureaucrat::DecrementGrade(unsigned int amount) {

	if (_grade >= amount)
		_grade += amount;
	else
		throw Bureaucrat::GradeTooLowException();
}

void	Bureaucrat::signForm(AForm &form) {

	try
	{
		form.beSigned(*this);
		std::cout << _FOREST_GREEN << _name << " signed " << form.getName() << _END << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << _RED << _name << " couldn't sign " << form.getName() << _END << std::endl;	
	}
}

void	Bureaucrat::executeForm(AForm const &form) {
	
	try
	{
		form.execute(*this);
		std::cout << _FOREST_GREEN << _name << " executed " << form.getName() << _END << std::endl;
	}
	catch (std::exception &e)
	{
	std::cout << _RED << _name << " couldn't execute " << form.getName() << _END << std::endl;	
	}
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	
	return (_RED "GRADE TO HIGH !" _END);
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	
	return (_RED "GRADE TO LOW !" _END);
}
