/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:48:49 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/23 21:35:32 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog"){
    this->DogBrain = new Brain;
    std::cout << "Dog Constructor called" << std::endl;
}
Dog::Dog(Dog const & other){
    *this = other;
    std::cout << "Dog copy constrctor called" << std::endl;
}

Dog::~Dog(){
    std::cout << "Dog Destructor called" << std::endl;
}
Brain& Dog::get_brain() const {
    return *this->DogBrain;
}
void Dog::makeSound() const{
    delete this->DogBrain;
    std::cout << "I'm a dog and make this sound :\"GUUUAAUUUU GUUUUAAUUU\"" << std::endl;
}

Dog& Dog::operator=(Dog const & other){
    this->DogBrain = new Brain(other.get_brain());
    this->_type = other.getType();
}