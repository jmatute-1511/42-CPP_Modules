/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 15:12:48 by jmatute-          #+#    #+#             */
/*   Updated: 2022/10/03 16:15:15 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form(target, 145, 137){
	this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm& other){
	*this = other;
}
ShrubberyCreationForm::~ShrubberyCreationForm(){}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm& other){
	this->_name = other.getName();
	this->_grade = other.getGrade();
	this->_execgrade = other.getExecgrade();
	this->_boolsigned = other.isSigned();
	this->_target = other._target;
	return *this;
}

void ShrubberyCreationForm::create_shrubbery() const{	
	
	std::ofstream	file;
	std::string		name = this->_target;
	file.open(name.append(".txt"));
	if (file.fail())
		throw ShrubberyCreationForm::Error_file_create();
	file <<"       _-_" << std::endl;;
	file <<"    /~~   ~~\\" << std::endl;;
	file <<" /~~         ~~\\" << std::endl;;
	file <<"{               }" << std::endl;;
	file <<" \\  _-     -_  /" << std::endl;;
	file <<"   ~  \\ //  ~" << std::endl;;
	file <<"_- -   | | _- _" << std::endl;;
	file <<"  _ -  | |   -_" << std::endl;;
	file <<"      // \\" << std::endl;;
}

void		ShrubberyCreationForm::execute(Bureaucrat const & executer) const{
	try
	{
		if(this->isSigned())
			throw ShrubberyCreationForm::Its_signed();
		if(executer.getGrade() > this->getGrade())
			throw Form::GradeTooLowException();
		ShrubberyCreationForm::create_shrubbery();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}