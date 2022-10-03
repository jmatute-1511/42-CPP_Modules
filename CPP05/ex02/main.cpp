/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 17:39:48 by jmatute-          #+#    #+#             */
/*   Updated: 2022/10/03 18:45:35 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int  main (){
	try
	{
		Bureaucrat const Judge("Jose", 20);
		
		Bureaucrat President("El Mero presi",10);
		ShrubberyCreationForm ambient("Form_ecosystem");
		President.executeForm(ambient);
		ambient.execute(President);
		RobotomyRequestForm robo("random");
		robo.execute(President);
		PresidentialPardonForm pardon("pardon");
		pardon.execute(President);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}