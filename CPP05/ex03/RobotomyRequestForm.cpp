/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 18:33:57 by jmatute-          #+#    #+#             */
/*   Updated: 2022/10/03 16:15:42 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form(target, 72, 45){
    this->_target = target;
}

RobotomyRequestForm::~RobotomyRequestForm(){
    
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm& other){
    this->_target = other._target;
    this->_name = other.getName();
    this->_grade = other.getGrade();
    this->_execgrade = other.getExecgrade();
    this->_boolsigned = other.isSigned();
    return *this;
}

std::string RobotomyRequestForm::getTarget() const{
    return this->_target;
}

void    RobotomyRequestForm::execute(Bureaucrat const & executer) const{
   try
	{
		if(this->isSigned())
			throw RobotomyRequestForm::Its_signed();
		if(executer.getGrade() > this->getGrade())
			throw RobotomyRequestForm::GradeTooLowException();
        RobotomyRequestForm::rand_msg();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
void RobotomyRequestForm::rand_msg() const{
    if (rand() % 2){
        std::cout << "TRRRRRRR TRRRRR TRRRR " << this->_target << " has been robotomized" << std::endl;
    }
    else
        std::cout << "Fail robotomized!" << std::endl;   
}