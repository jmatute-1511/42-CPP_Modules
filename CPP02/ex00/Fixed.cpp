/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:51:57 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/13 18:18:09 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
    this->_nb = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed& newfix){
    std::cout << "Copy constructor called" << std::endl; 
    Fixed::operator=(newfix);
}

void   Fixed::operator=(Fixed& fix){
    std::cout << "Assignation operator called" << std::endl;
    this->_nb = fix.getRawBits();
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_nb;
}

void Fixed::setRawBits(int const raw){
    this->_nb = raw;
}
