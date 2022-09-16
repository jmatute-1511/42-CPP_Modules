/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:51:57 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/16 04:15:51 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//CONSTRUCTORS

Fixed::Fixed(){
    this->_nb = 0;
    std::cout << "Default contructor called" << std::endl;
}

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

// SET AND GET

int Fixed::getRawBits(void) const{
    return this->_nb;
}

void Fixed::setRawBits(int const raw){
    this->_nb = raw;
}

// FUNCTIONS MEMBERS

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

//OPERATORS

bool    Fixed::operator<(Fixed const& n1) const{
    if(this->getRawBits() < n1.getRawBits())
        return true;
    return false;
}

bool    Fixed::operator>(Fixed const& n1) const {
    if (this->getRawBits() > n1.getRawBits())
        return true;
    return false;
}

bool    Fixed::operator>=(Fixed const& n1) const {
    if (this->getRawBits() >= n1.getRawBits())
        return true;
    return false;
}

bool    Fixed::operator<=(Fixed const& n1) const {
    if (this->getRawBits() <= n1.getRawBits())
        return true;
    return false;
}

bool    Fixed::operator==(Fixed const& n1) const {
    if (this->getRawBits() == n1.getRawBits())
        return true;
    return false;
}

bool    Fixed::operator!=(Fixed const& n1) const {
    if (this->getRawBits() != n1.getRawBits())
        return true;
    return false;
}    

Fixed   Fixed::operator+(Fixed const& n1) const {
    return Fixed(this->toFloat() + n1.toFloat());
    
}

Fixed   Fixed::operator-(Fixed const& n1) const {
    return Fixed(this->toFloat() - n1.toFloat());
}

Fixed   Fixed::operator* (Fixed const& n1) const {
    return Fixed(this->toFloat() * n1.toFloat());
}

Fixed Fixed::operator/(Fixed const& n1) const {
    return Fixed( this->toFloat() / n1.toFloat());
}
// OPERATORS INCREMENT AND DECREMENT

Fixed& Fixed::operator++(){
    this->setRawBits( this->getRawBits() + 1);
    return *this;  
}

Fixed Fixed::operator++(int){
    Fixed post(*this);
    ++(*this);
    return post;
}

Fixed& Fixed::operator--(){
    this->setRawBits( this->getRawBits() - 1);
    return *this;  
}

Fixed Fixed::operator--(int){
    Fixed de(*this);
    --(*this);
    return de;
}

//STATIC FNCTIONS MEMBERS

Fixed& Fixed::max( Fixed& n1, Fixed& n2){
    if (n2  > n1)
        return n2;
    return n1;
}

Fixed const& Fixed::max( Fixed const& n1, Fixed const& n2){
    if (n2.toFloat() > n1.toFloat())
        return n2;
    return n1;
}

Fixed& Fixed::min( Fixed& n1, Fixed& n2){
    if (n2  < n1)
        return n2;
    return n1;
}

Fixed const& Fixed::min( Fixed const& n1, Fixed const& n2){
    if (n2.toFloat() < n1.toFloat())
        return n2;
    return n1;
}

//DESTRUCTOR
Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

//OPERATOR OUT

std::ostream& operator<<(std::ostream & out, const Fixed& num){
    
    out << num.toFloat();
    return(out);    
}