/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human_B.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 15:10:39 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/04 16:52:03 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human_B.hpp"

Human_B::Human_B(std::string new_name){
    this->_name = new_name;
    this->_weapon = NULL;
}

Human_B::~Human_B(){
    
    if (this->_weapon)
        std::cout << "Human " << this->_name << " leave the arms and dead" << std::endl;
    else
        std::cout << "Human " << this->_name << " dead" << std::endl;
    return ;    
}

void Human_B::add_weapon(Weapon nweapon){
    this->_weapon = &nweapon;
}

void Human_B::atack(){
    
    if (this->_weapon){
        std::cout << this->_name << " attacks with his " << this->_weapon->get_type() << std::endl;
    }
    else{
        std::cout << "Human " << this->_name << "  no have arm" << std::endl;
    }
}   

void Human_B::set_arg(std::string name){
    this->_name = name;
}

std::string Human_B::get_arg(){
    return(this->_name);
}
