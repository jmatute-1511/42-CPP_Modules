/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:48:49 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/25 15:19:12 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog"){
    this->DogBrain = new Brain;
    std::cout << "Dog Constructor called" << std::endl;
}
Dog::Dog(Dog const & other): Animal("Dog"){
    *this = other;
    std::cout << "Dog copy constrctor called" << std::endl;
}

Dog::~Dog(){
    delete this->DogBrain;
    std::cout << "Dog Destructor called" << std::endl;
}
Brain& Dog::get_brain() const {
    return *this->DogBrain;
}
void Dog::makeSound() const{
    std::cout << "I'm a dog and make this sound :\"GUUUAAUUUU GUUUUAAUUU\"" << std::endl;
}

Dog& Dog::operator=(Dog const & other){
    this->DogBrain = new Brain(other.get_brain());
    this->_type = other.getType();
    return *this;
}