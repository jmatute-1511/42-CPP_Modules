/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 02:19:08 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/25 16:02:38 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Claptrap.hpp"

Claptrap::Claptrap(): _name("default"), _hitpoints(10) , _energy_points(10), _atack_damage(0){
    std::cout << "Claptrap " <<this->_name <<" Constructor called" << std::endl;
}
    
Claptrap::Claptrap(std::string name):  _name(name), _hitpoints(10) , _energy_points(10), _atack_damage(0){
    std::cout << "Claptrap " << this->_name <<" Constructor called" << std::endl;
}

Claptrap::~Claptrap(){
    std::cout<< "Destructor of "<< this->_name << " called" << std::endl;
}

Claptrap::Claptrap(Claptrap const & cpy){
    Claptrap::operator=(cpy);
}

void Claptrap::attack(std::string const & target){
    if (this->_hitpoints == 0 || this->_energy_points == 0)
        std::cout << this->_name << " not have hitpoints or energy points for execute attack" << std::endl;
    else{
        std::cout << this->_name << " with " << target <<", causing " << this->_atack_damage << " points of damage!" << std::endl;
        this->_energy_points -= 1;
        std::cout << this->_name << " have now " << this->_energy_points << " energy points" << std::endl;
    }
}

void Claptrap::takeDamage(unsigned int amount){

    int prev = this->_hitpoints - amount;
    if ((prev) <= 0){
        this->_hitpoints= 0;
        std::cout << this->_name << " has died"<< std::endl;
    }
    else{
        this->_hitpoints -= amount; 
        std::cout << this->_name << " take a damage " <<  amount << " ,Hitpoints : " << this->_hitpoints <<std::endl;
    }
}
void Claptrap::beRepaired(unsigned int amount){
    if (this->_hitpoints == 0)
        std::cout << this->_name << " is dead" << std::endl;
    else{
        this->_hitpoints += amount;
        std::cout << this->_name << " be repaired wiht " << amount << " Hitpoints :" << this->_hitpoints << std::endl;
    }
}

Claptrap& Claptrap::operator=(Claptrap  const &equal){
    
    this->_name = equal.get_name();
    this->_hitpoints = equal.get_hitpoints();
    this->_energy_points = equal.get_energy_points();
    this->_atack_damage = equal.get_atack_damage()  ;
    return *this;
}

std::string Claptrap::get_name() const{
    return this->_name;
}

int Claptrap::get_hitpoints() const{
    return this->_hitpoints;
}

int Claptrap::get_energy_points() const{
    return this->_energy_points;
}

int Claptrap::get_atack_damage()const {
    return this->_atack_damage;
}

void Claptrap::set_hitpoints(int new_hp){
    this->_hitpoints = new_hp;
}

void Claptrap::set_energy_points(int new_ep){
    this->_energy_points = new_ep;
}

void Claptrap::set_atack_damage(int new_at){
    this->_atack_damage = new_at;
}