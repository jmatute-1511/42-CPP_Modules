/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scavtrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 08:21:43 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/18 15:02:57 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scavtrap.hpp"

Scavtrap::Scavtrap(){
    this->_name = "default Scavtrap";
    this->_energy_points = 50;
    this->_atack_damage = 20;
    this->_hitpoints = 100;
    std::cout << "Scavtrap " << this->_name << " Constructor called" << std::endl;
}

Scavtrap::Scavtrap(std::string  new_name):Claptrap(new_name){
    this->_energy_points = 50;
    this->_atack_damage = 20;
    this->_hitpoints = 100;
    std::cout << "Scavtrap " << this->_name << " Constructor called" << std::endl;
}
Scavtrap::~Scavtrap(){
    std::cout << "Scavtrap " << this->_name << " Destructor called" << std::endl;
}
void Scavtrap::attack(std::string const & target){
    if (this->_hitpoints == 0)
        std::cout << this->_name << " not have hitpoints for execute attack" << std::endl;
    else{
        std::cout << "Scavtrap " <<this->_name << " with " << target <<", causing " << this->_atack_damage << " points of damage!" << std::endl;
        this->_hitpoints -= 1;
        std::cout << this->_name << " have now " << this->_hitpoints << " hitpoints" << std::endl;
    }
}
void Scavtrap::gurdgate(){
    std::cout << this->_name << " has gone into gate guard mode" << std::endl;
}

