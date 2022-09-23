/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:57:35 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/23 21:10:04 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat"){
    std::cout << "Cat Consttructor called" << std::endl;
}

Cat::Cat(Cat const & other){
    *this = other;
}

Cat::~Cat(){
    std::cout << "Cat Destructor called" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "I'm a cat and my sound : \"MIIIAAAUUU MIIIAAAUUU\"" << std::endl;
}

Cat& Cat::operator=(Cat const & other){
    this->_type = other.getType();
    return *this;    
}