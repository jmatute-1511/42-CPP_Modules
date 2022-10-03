/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:11:42 by jmatute-          #+#    #+#             */
/*   Updated: 2022/10/03 18:48:31 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){
}

Intern::~Intern(){
}

Intern& Intern::operator=(Intern& other){
	(void) other;
	return *this;
}

Form* Intern::makeForm(std::string type, std::string name){

	Form * new_form = NULL;
	size_t i = 0;
	std::string types[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	while (i < 3)
	{
		if (types[i] == type)
			break;
		i++;
	}
	switch (i)
	{
		case 0: std::cout <<"Intern creates RobotomyRequestForm" << std::endl;
			new_form =  new RobotomyRequestForm(name);
			break;
		case 1:std::cout << "Intern creates PresidentialPardonForm" << std::endl; 
			new_form =   new PresidentialPardonForm(name);
			break;
		case 2: std::cout <<"Intern creates ShrubberyCreationForm" << std::endl;
			new_form = new ShrubberyCreationForm(name);
			break;
		default: std::cout << "Not have this type Form!" << std::endl;
			break;
	}
	return new_form;
}