/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:57:35 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/23 21:28:57 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat"){
    this->CatBrain = new Brain;
    std::cout << "Cat Consttructor called" << std::endl;
}

Cat::Cat(Cat const & other){
    *this = other;
    std::cout << "Cat copy constrctor called" << std::endl;
}

Cat::~Cat(){
    delete this->CatBrain;
    std::cout << "Cat Destructor called" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "I'm a cat and my sound : \"MIIIAAAUUU MIIIAAAUUU\"" << std::endl;
}
Brain& Cat::get_brain() const {
    return *this->CatBrain;
}

Cat& Cat::operator=(Cat const & other){
    this->CatBrain = new Brain(other.get_brain());
    this->_type = other.getType();
    return *this;    
}