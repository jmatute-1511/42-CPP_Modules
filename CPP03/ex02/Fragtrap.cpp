/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fragtrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 13:42:26 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/20 18:51:13 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fragtrap.hpp"

Fragtrap::Fragtrap():Claptrap(){
    this->_hitpoints = 100;
    this->_energy_points = 100;
    this->_atack_damage = 30;
    std::cout << " Fragtrap Default constructor called" << std::endl;
}

Fragtrap::Fragtrap(std::string name): Claptrap(name){
     this->_hitpoints = 100;
    this->_energy_points = 100;
    this->_atack_damage = 30;
    std::cout << "Fragtra "<< this->_name << " constructor caled" << std::endl;
}

Fragtrap::Fragtrap(Fragtrap const & other){
    Fragtrap::operator=(other);
}

Fragtrap::~Fragtrap(){
    std::cout << "Fragtrap destructor called" << std::endl;
}

void Fragtrap::attack(std::string const & target){
        if (this->_hitpoints == 0)
        std::cout <<  "Fragtrap" << this->_name << " not have hitpoints for execute attack" << std::endl;
    else{
        std::cout << "Fragtrap " <<this->_name << " with " << target <<", causing " << this->_atack_damage << " points of damage!" << std::endl;
        this->_hitpoints -= 1;
        std::cout << this->_name << " have now " << this->_hitpoints << " hitpoints" << std::endl;
    }
}

Fragtrap& Fragtrap::operator=(Fragtrap const & other){
    this->_name = other.get_name();
    this->_hitpoints = other.get_hitpoints();
    this->_energy_points = other.get_energy_points();
    this->_atack_damage = other.get_atack_damage();
    return *this;
}
void    Fragtrap::highFivesGuys(void){
    
    std::cout << "Fragtrap " << this->_name << " give me five !" << std::endl;
}