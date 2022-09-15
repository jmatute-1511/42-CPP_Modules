/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HUman_A.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 18:34:00 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/04 16:53:28 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human_A.hpp"
#include "Weapon.hpp"


Human_A::Human_A(std::string new_name, Weapon& new_weapon): _weapon(new_weapon){
    this->_name = new_name;
}

Human_A::~Human_A(){
    std::cout << "Human " << this->_name << " leave the arms and dead" << std::endl;
    return ;
}

void Human_A::set_arg(std::string new_str){
    this->_name = new_str;
}

std::string Human_A::get_arg(){
    return(this->_name);
}

void Human_A::atack(){
    std::cout << this->_name << " attacks with his " << this->_weapon.get_type() << std::endl;
}