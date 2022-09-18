/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 02:19:08 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/18 18:00:25 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Claptrap.hpp"

Claptrap::Claptrap(): _hitpoints(10) ,_energy_points(10), _atack_damage(0), _name("default"){
    std::cout << this->_name <<" Constructor called" << std::endl;
}
    
Claptrap::Claptrap(std::string name): _hitpoints(10) ,_energy_points(10), _atack_damage(0), _name(name){
    std::cout << this->_name <<" Constructor called" << std::endl;
}

Claptrap::~Claptrap(){
    std::cout<< "Destructor of "<< this->_name << " called" << std::endl;
}

Claptrap::Claptrap(Claptrap& cpy){
    this->_name = cpy.get_name();
    this->_hitpoints = cpy.get_hitpoints();
    this->_energy_points = cpy.get_energy_points();
    this->_atack_damage = cpy.get_atack_damage();
}

void Claptrap::attack(std::string const & target){
    if (this->_hitpoints == 0 || this->_energy_points == 0)
        std::cout << this->_name << " not have hitpoints or energiy points for execute attack" << std::endl;
    else{
        std::cout << this->_name << " with " << target <<", causing " << this->_atack_damage << " points of damage!" << std::endl;
        this->_hitpoints -= 1;
        std::cout << this->_name << " have now " << this->_hitpoints << " hitpoints" << std::endl;
    }
}

void Claptrap::takeDamage(unsigned int amount){

    int prev = this->_energy_points - amount;
    if ((prev) <= 0){
        this->_energy_points = 0;
        std::cout << this->_name << " has died"<< std::endl;
    }
    else{
        this->_energy_points -= amount; 
        std::cout << this->_name << " take a damage " <<  amount << " ,Energy_Points : " << this->_energy_points <<std::endl;
    }
}
void Claptrap::beRepaired(unsigned int amount){
    if (this->_energy_points == 0)
        std::cout << this->_name << " is dead" << std::endl;
    else{
        this->_energy_points += amount;
        std::cout << this->_name << " be repaired wiht " << amount << " energy points, Energy_Points :" << this->_energy_points << std::endl;
    }
}

Claptrap& Claptrap::operator=(Claptrap  & equal){
    return equal;
}

std::string Claptrap::get_name(){
    return this->_name;
}

int Claptrap::get_hitpoints(){
    return this->_hitpoints;
}

int Claptrap::get_energy_points(){
    return this->_energy_points;
}

int Claptrap::get_atack_damage(){
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