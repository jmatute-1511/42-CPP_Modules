/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 17:39:48 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/29 13:49:32 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "Form.hpp"

int  main (){
	try
	{
		Bureaucrat Judge("Jose", 20);
		Form penal_decision("Decision Final", 25, 25);
		Form cpy_pd(penal_decision);
		
		penal_decision.besigned(Judge);
		Judge.signForm(penal_decision);
		Bureaucrat Police("Mario",50);
		Police.signForm(cpy_pd);
		cpy_pd.besigned(Police);
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}