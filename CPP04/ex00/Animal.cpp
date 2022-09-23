/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:41:54 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/23 21:10:57 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
    _type = "Animal default";
    std::cout << "Animal Constructor " << _type << std::endl;
}

Animal::Animal(std::string type){
    _type = type;
    std::cout << "Animal Constructor " << _type << std::endl;
}
Animal::Animal(Animal const& other){
    *this = other;
}

Animal::~Animal(){
    std::cout << "Animal Destructor "<< _type <<  " called" << std::endl;
}

void    Animal::makeSound() const{
    std::cout << "Animal sound undefined" << std::endl;
}

std::string Animal::getType() const{
    return _type;
}

Animal& Animal::operator=(Animal const & other){
    this->_type = other.getType();
    return *this;
}