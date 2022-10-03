/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:33:12 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/28 18:00:31 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){
    this->_name = "Default Bureaucrat";
    this->_grade = 1;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade){  
    throw_errors(); 
}
Bureaucrat::Bureaucrat(Bureaucrat&  other){
    *this= other;
}

Bureaucrat::~Bureaucrat(){
}

std::string Bureaucrat::getName() const{
    return this->_name;
}

int Bureaucrat::getGrade() const{
    return this->_grade;
}

void    Bureaucrat::IncrementGrade(){
    this->_grade+=1;
    throw_errors();
}

void Bureaucrat::DecrementGrade(){
    this->_grade-=1;
    throw_errors();
}

void    Bureaucrat::throw_errors(){
    if (this->_grade >150)
        throw Bureaucrat::GradeTooLowException();
    else if (this->_grade <= 0)
        throw Bureaucrat::GradeTooHighException();
}   

Bureaucrat& Bureaucrat::operator=(Bureaucrat& other){
    this->_name = other.getName();
    this->_grade = other.getGrade();
    return *this;
}

std::ostream& operator<<(std::ostream& out, Bureaucrat& buro){
    out << buro.getName() << ", bureaucrat grade " << buro.getGrade();
    return(out);
}