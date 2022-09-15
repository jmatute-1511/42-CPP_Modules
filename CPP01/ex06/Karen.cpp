/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 15:26:09 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/09 15:59:55 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void    Karen::debug(){
	std::cout <<"I love to get extra bacon for my";
	std::cout << "7XL-double-cheese-triple-pickle-special-ketchup";
	std::cout << "burger. I just love it!." << std::endl;
}

void    Karen::info(){
	std::cout << "I cannot believe adding extra bacon cost";
	std::cout << " more money. You don’t put enough! If you";
	std::cout << "did I would not have to ask for it!." << std::endl;
}

void    Karen::warning(){
	std::cout << "I think I deserve to have some extra bacon for free.";
	std::cout << "I’ve been coming here for years and you just started working here last month.";
	std::cout << std::endl;
}

void    Karen::error(){
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void    Karen::complains(std::string level){
	
	std::string lst_complains[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int it = 0;
	
	while (it < 4)
	{
		if (lst_complains[it] == level)
			break;
		it++;
	}
	switch (it)
	{
		case 0 : std::cout << "[DEBUG]" << std::endl;
			Karen::debug();
		case 1 :std::cout << "[INFO]" << std::endl;
			Karen::info();
		case 2 : std::cout << "[WARNING]" << std::endl;
			Karen::warning();
		case 3 : std::cout << "[ERROR]" << std::endl;
			Karen::error();
			break;
		default:std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
	
}

Karen::Karen(){
	return ;
}
Karen::~Karen(){
	return ;
}