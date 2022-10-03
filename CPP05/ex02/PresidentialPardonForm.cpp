/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:30:37 by jmatute-          #+#    #+#             */
/*   Updated: 2022/10/03 16:16:21 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form(target, 25, 5){
    this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm& other){
    *this = other;
}
PresidentialPardonForm::~PresidentialPardonForm(){}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm& other){
    this->_target = other.getTarget();
    this->_name = other.getName();
    this->_grade = other.getGrade();
    this->_execgrade = other.getExecgrade();
    this->_boolsigned = other.isSigned();
    return *this;
}

std::string PresidentialPardonForm::getTarget() const{
    return this->_target;
}

void    PresidentialPardonForm::execute(Bureaucrat const & executer) const{
    try
    {
        if (this->isSigned())
            throw PresidentialPardonForm::Its_signed();
        if(executer.getGrade() > this->getGrade())
            throw PresidentialPardonForm::GradeTooLowException();
        PresidentialPardonForm::msg_pardom();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void    PresidentialPardonForm::msg_pardom() const{
    std::cout << this->_target << " has been pardoned by Zafod Beeblebrox.";
}