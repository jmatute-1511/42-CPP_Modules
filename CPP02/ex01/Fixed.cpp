/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:51:57 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/19 21:35:59 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(const Fixed& newfix){
    std::cout << "Copy constructor called" << std::endl; 
    Fixed::operator=(newfix);
}

Fixed::Fixed(int nb_int){
    this->_nb = nb_int *(1<<this->_rawbit);
    std::cout << "Int contructor called" << std::endl;
}

Fixed::Fixed(float nb_float){
    this->_nb = nb_float * (1 << this->_rawbit);
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(){
    this->_nb = 0;
    std::cout << "Default contructor called" << std::endl;
}

int Fixed::toInt(void)const{
    int nb;

    nb = this->getRawBits() >> this->_rawbit;
    return (nb);
}

float   Fixed::toFloat(void) const{
    float nb;

    nb = (float)this->getRawBits() / (float) (1<<this->_rawbit);
    return (nb);
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const{
    return this->_nb;
}

void Fixed::setRawBits(int const raw){
    this->_nb = raw;
}

void    Fixed::operator = (Fixed const & fix){
    std::cout << "Assignation operator called" << std::endl;
    this->_nb = fix.getRawBits();

}

std::ostream& operator<<(std::ostream & out, const Fixed& num){
    
    out << num.toFloat();
    return(out);    
}