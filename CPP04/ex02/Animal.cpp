/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:41:54 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/25 15:45:27 by jmatute-         ###   ########.fr       */
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
    std::cout << "Anmal copy constrctor called" << std::endl;
}

Animal::~Animal(){
    std::cout << "Animal Destructor "<< _type <<  " called" << std::endl;
}

std::string Animal::getType() const{
    return _type;
}

Animal& Animal::operator=(Animal const & other){
    this->_type = other.getType();
    return *this;
}