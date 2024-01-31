/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:09:44 by jaristil          #+#    #+#             */
/*   Updated: 2024/01/31 17:49:46 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm::AForm("RobotomyRequestForm", 72, 45) {

	std::cout << _YELLOW "Default Constructor called: RobotomyRequestForm" _END << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
AForm::AForm("RobotomyRequestForm", 72, 45), _target(target) {

	std::cout << _YELLOW "Parametric Constructor called: RobotomyRequestForm" _END << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) :
AForm::AForm("RobotomyRequestForm", 72, 45), _target(src._target) {

	std::cout << _YELLOW "Copy Constructor called: RobotomyRequestForm" _END << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {

	std::cout << _YELLOW "Destructor called: RobotomyRequestForm" _END << std::endl;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs) {
	
	std::cout << _YELLOW "Assignment Operator called: RobotomyRequestForm" _END << std::endl;
	if (this != &rhs)
		_target = rhs._target;
	return (*this);
}

std::string const &RobotomyRequestForm::getTarget() const {

	return (this->_target);
}

std::ostream & operator<<(std::ostream & o, RobotomyRequestForm const &rhs) {
	
	o << _BLUE << "Form " << rhs.getName() << (rhs.getIsSigned() ? " (signed) | " : " (not signed) | ")
	<< "Grade required to sign: "<< rhs.getGrade() << " | Grade required to execute: "
	<< rhs.getExecuteGrade() << " | Target: " << rhs.getTarget() << _END;
	
	return (o);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
    try
	 {
        this->check_execute(executor);
        // Generate a random result for robotization (50% success rate for demonstration)
        bool success = (rand() % 2 == 0);

        std::cout << "Processing robotization of " << this->_target << "..." << std::endl;        
        if (success)
		{
            std::cout << _FOREST_GREEN "✨ Robotization of " << this->_target << " succeeded! ✨" _END << std::endl;
        } 
		else
		{
            std::cout << _RED "🤖 Robotization of " << this->_target << " failed. Better luck next time. 🤖" _END << std::endl;
        }
    } 
	catch(const std::exception& e) 
	{
        std::cerr << e.what() << std::endl;
        throw AForm::ExecutionFailed();
    }
}

