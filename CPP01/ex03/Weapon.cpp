/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weaapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 17:33:23 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/04 16:48:27 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string Weapon::get_type(){
    return (this->_type);
}

void    Weapon::set_type(std::string new_type){
    this->_type = new_type;
}

Weapon::Weapon(std::string Wname){
    this->_type = Wname;
    return ;
}

Weapon::~Weapon(){
    return ;
}