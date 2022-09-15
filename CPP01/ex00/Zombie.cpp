/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 17:12:31 by jmatute-          #+#    #+#             */
/*   Updated: 2022/08/31 17:50:50 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie(){
    this->_name = "Michael Jackson(Thriller)";    
}

Zombie::Zombie(std::string name){
    this->_name = name;
}

Zombie::~Zombie(){
    std::cout << this->_name << " has go to the hell." << std::endl;
}

void Zombie::anounce(){
    std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl; 
}