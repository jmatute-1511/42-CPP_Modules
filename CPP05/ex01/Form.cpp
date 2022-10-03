/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 13:10:55 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/29 13:48:38 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form():_grade(150), _boolsigned(false), _execgrade(150), _name("Defaul Form"){
}

Form::Form(std::string name, int grade, int execgrade):_grade(grade), _boolsigned(false), _execgrade(execgrade), _name(name){
    if (grade <= 0 || execgrade <= 0)
        throw Form::GradeTooHighException();
    else if (grade > 150 || execgrade > 150)
        throw Form::GradeTooLowException();
}

Form::Form(Form& other){
    *this = other;
}
Form::~Form(){
}
Form& Form::operator=(Form& other){
    this->_name = other.getName();
    this->_grade = other.getGrade();
    this->_execgrade = other.getExecgrade();
    this->_boolsigned = other.isSigned();
    return *this;
}
int Form::getGrade() const{
    return this->_grade;
}

int Form::getExecgrade() const{
    return this->_execgrade;
}

std::string Form::getName() const{
    return this->_name;
}

bool Form::isSigned(){
    return this->_boolsigned;
}

void Form::besigned(Bureaucrat& buro){
    if (buro.getGrade() > this->getGrade())
        throw Form::GradeTooLowException();
    this->_boolsigned = true;
}
std::ostream& operator<<(std::ostream& out, Form& other){
    out << other.getName() << " form grade " << other.getGrade();
    return (out);
}