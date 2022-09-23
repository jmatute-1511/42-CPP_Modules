/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Diamondtrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:57:00 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/23 16:49:40 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Diamondtrap.hpp"

Diamondtrap::Diamondtrap(): Fragtrap(), Scavtrap(){
    this->_name = "Default Diamontrap";
    this->Claptrap::set_name(this->_name.append("clap_name"));
    this->_hitpoints = this->Fragtrap::get_hitpoints();
    this->_energy_points = this->Scavtrap::get_energy_points();
    this->_atack_damage = this->Fragtrap::get_atack_damage(); 
    std::cout << "DiamondTrap " << this->_name << " constructor called" << std::endl;
}

Diamondtrap::Diamondtrap(std::string name): Claptrap(name + "_clap_name"), Fragtrap(name), Scavtrap(name){
    this->_name = name;
    this->_hitpoints = this->Fragtrap::get_hitpoints();
    this->_atack_damage = this->Fragtrap::get_atack_damage(); 
    std::cout << "DiamondTrap " << this->_name << " constructor called" << std::endl;
}

Diamondtrap::Diamondtrap(Diamondtrap const & other): Fragtrap(other.get_name()), Scavtrap(other.get_name()){
    Diamondtrap::operator=(other);
}

Diamondtrap::~Diamondtrap(){
    std::cout << "Diamodtrap " << this->_name << " destructor called" << std::endl;    
}

Diamondtrap& Diamondtrap::operator=(Diamondtrap const & other){
    this->set_name( other.get_name());
    this->set_hitpoints(other.get_hitpoints());
    this->set_energy_points(other.get_energy_points());
    this->set_atack_damage(other.get_atack_damage());
    return *this;
}

void    Diamondtrap::attack(std::string const & target){
    if (this->_hitpoints == 0)
        std::cout <<  "Diamondtrap" << this->_name << " not have hitpoints for execute attack" << std::endl;
    else{
        std::cout << "Diamondtrap " <<this->_name << " with " << target <<", causing " << this->_atack_damage << " points of damage!" << std::endl;
        this->_hitpoints -= 1;
        std::cout << this->_name << " have now " << this->_hitpoints << " hitpoints" << std::endl;
    }
    
}

void Diamondtrap::whoAmI(){

    std::cout << "I am Diamondtrap " << this->_name << std::endl;
    std::cout << "Hitpoints : " << this->_hitpoints << std::endl;
    std::cout << "Energy_points : " << this->_energy_points << std::endl;
    std::cout << "Atack_damage : " << this->_atack_damage << std::endl;
}

std::string     Diamondtrap::get_Dname(){
    return this->_name;
}

void    Diamondtrap::set_Dname(std::string  name){
    this->_name = name;
}


