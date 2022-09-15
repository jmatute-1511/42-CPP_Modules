/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 15:26:09 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/08 16:37:29 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void    Karen::debug(){
    std::cout <<"I love to get extra bacon for my";
    std::cout << "7XL-double-cheese-triple-pickle-special-ketchup";
    std::cout << "burger. I just love it!." << std::endl;
}

void    Karen::info(){
    std::cout << " I cannot believe adding extra bacon cost";
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
    void    (Karen::*functions[])(void) ={&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
    
    for(int it = 0; it < 4; it++){
        if(lst_complains[it] == level){
            (this->*functions[it])();
            return;
        }
    }
    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

Karen::Karen(){
    return ;
}
Karen::~Karen(){
    return ;
}