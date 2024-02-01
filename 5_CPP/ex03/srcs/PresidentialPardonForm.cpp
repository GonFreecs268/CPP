/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:10:12 by jaristil          #+#    #+#             */
/*   Updated: 2024/02/01 14:35:43 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm::AForm("PresidentialPardonForm", 25, 5) {

	std::cout << _YELLOW "Default Constructor called: PresidentialPardonForm" _END << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
AForm::AForm("PresidentialPardonForm", 25, 5), _target(target) {

	std::cout << _YELLOW "Parametric Constructor called: PresidentialPardonForm" _END << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) :
AForm::AForm("PresidentialPardonForm", 25, 5), _target(src._target) {
	
	std::cout << _YELLOW "Copy Constructor called: PresidentialPardonForm" _END << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {

	std::cout << _YELLOW "Destructor called: PresidentialPardonForm" _END << std::endl;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs) {
	
	std::cout << _YELLOW "Assignment Operator called: PresidentialPardonForm" _END << std::endl;
	if (this != &rhs)
		_target = rhs._target;
	return (*this);
}

std::ostream & operator<<(std::ostream & o, PresidentialPardonForm const &rhs) {
	
	o << _BLUE << "Form " << rhs.getName() << (rhs.getIsSigned() ? " (signed) | " : " (not signed) | ")
	<< "Grade required to sign: "<< rhs.getGrade() << " | Grade required to execute: "
	<< rhs.getExecuteGrade() << " | Target: " << rhs.getTarget() << _END;
	
	return (o);
}

std::string const &PresidentialPardonForm::getTarget() const {

	return (this->_target);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	try
	{
		this->check_execute(executor);
		std::cout << _FOREST_GREEN << this->_target << " has been forgiven by Zaphod Beeblebrox" _END << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		throw AForm::ExecutionFailed();
	}
}
