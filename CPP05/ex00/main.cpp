/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 17:39:48 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/28 17:52:44 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"

int  main (){
	try
	{
		Bureaucrat Jose("Jose", 20);

		Bureaucrat Mario(Jose);
		std::cout << "I'm Mario Copy of "<< Mario << std::endl;
	//    for (size_t i = 0; i < 140; i++){
	// 		Jose.DecrementGrade();
	// 	}
	// 	for (size_t i = 0; i < 140; i++){
	// 	   Jose.IncrementGrade();
	// 	}
		
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}