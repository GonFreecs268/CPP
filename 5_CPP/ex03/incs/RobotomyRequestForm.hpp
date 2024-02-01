/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:09:44 by jaristil          #+#    #+#             */
/*   Updated: 2024/02/01 14:37:00 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdlib.h> //rand
#include <string>
#include "colors.hpp"
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	public:

    RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
    RobotomyRequestForm(RobotomyRequestForm const &src);
    virtual ~RobotomyRequestForm();

    virtual RobotomyRequestForm& 	operator=(RobotomyRequestForm const &rhs);

	std::string const 				&getTarget() const;

	// no need virtual normally
	void					execute(Bureaucrat const &executor) const;

	private:

	std::string _target;
};

std::ostream & operator<<(std::ostream & o, RobotomyRequestForm const &rhs);
