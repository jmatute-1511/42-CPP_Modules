/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:48:49 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/23 21:10:18 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog"){
    std::cout << "Dog Constructor called" << std::endl;
}
Dog::Dog(Dog const & other){
    *this = other;
}

Dog::~Dog(){
    std::cout << "Dog Destructor called" << std::endl;
}

void Dog::makeSound() const{
    std::cout << "I'm a dog and make this sound :\"GUUUAAUUUU GUUUUAAUUU\"" << std::endl;
}

Dog& Dog::operator=(Dog const & other){
    this->_type = other.getType();
    return *this;
}