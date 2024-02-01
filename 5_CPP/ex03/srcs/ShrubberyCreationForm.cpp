/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:09:15 by jaristil          #+#    #+#             */
/*   Updated: 2024/02/01 18:15:05 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm::AForm("ShrubberyCreationForm", 145, 137) {

	std::cout << _YELLOW "Default Constructor called: ShrubberyCreationForm" _END << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
AForm::AForm("ShrubberyCreationForm", 145, 137), _target(target) {

	std::cout << _YELLOW "Parametric Constructor called: ShrubberyCreationForm" _END << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) :
AForm::AForm("ShrubberyCreationForm", 145, 137), _target(src._target) {

	std::cout << _YELLOW "Copy Constructor called: ShrubberyCreationForm" _END << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {

	std::cout << _YELLOW "Destructor called: ShrubberyCreationForm" _END << std::endl;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs) {
	
	std::cout << _YELLOW "Assignment Operator called: ShrubberyCreationForm" _END << std::endl;
	if (this != &rhs)
		_target = rhs._target;
	return (*this);
}

std::ostream & operator<<(std::ostream & o, ShrubberyCreationForm const &rhs) {
	
	o << "Form " << rhs.getName() << (rhs.getIsSigned() ? " (signed) | " : " (not signed) | ")
	<< "Grade required to sign: "<< rhs.getGrade() << " | Grade required to execute: "
	<< rhs.getExecuteGrade();
	
	return (o);
}

std::string const &ShrubberyCreationForm::getTarget() const {

	return (this->_target);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const {

	try
	{
		this->check_execute(executor);
		std::string filename = _target + "_shrubbery";
		std::ofstream outFile(filename.c_str());
    	if (outFile.is_open())
		{
    	    outFile << "            .\n\
                                   .         ;\n\
      .              .              ;%     ;;\n\
        ,           ,                :;%  %;\n\
         :         ;                   :;%;'     .,\n\
,.        %;     %;            ;        %;'    ,;\n\
  ;       ;%;  %%;        ,     %;    ;%;    ,%'\n\
   %;       %;%;      ,  ;       %;  ;%;   ,%;'\n\
    ;%;      %;        ;%;        % ;%;  ,%;'\n\
     `%;.     ;%;     %;'         `;%%;.%;'\n\
      `:;%.    ;%%. %@;        %; ;@%;%'\n\
         `:%;.  :;bd%;          %;@%;'\n\
           `@%:.  :;%.         ;@@%;'\n\
             `@%.  `;@%.      ;@@%;'\n\
               `@%%. `@%%    ;@@%;\n\
                 ;@%. :@%%  %@@%;\n\
                   %@bd%%%bd%%:;\n\
                     #@%%%%%:;;\n\
                     %@@%%%::;\n\
                     %@@@%(o);  . '\n\
                     %@@@o%;:(.,'\n\
                 `.. %@@@o%::;\n\
                    `)@@@o%::;\n\
                     %@@(o)::;\n\
                    .%@@@@%::;\n\
                    ;%@@@@%::;.\n\
                   ;%@@@@%%:;;;.\n\
               ...;%@@@@@%%:;;;;,.." << std::endl;
    	    outFile.close();
    	    std::cout << "ShrubberyCreationForm executed successfully!" << std::endl;
    	} 
		else
		{
    	    throw ShrubberyCreationForm::FileCreationException(); // Handle file creation failure
    	}
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		throw AForm::ExecutionFailed(); // Handle execute failure
	}
}

const char *ShrubberyCreationForm::FileCreationException::what() const throw() {
	
	return (_RED "Failed to create Shrubbery file!" _END);
}
