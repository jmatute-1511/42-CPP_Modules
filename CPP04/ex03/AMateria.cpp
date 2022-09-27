/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Amateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 22:08:55 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/26 22:09:16 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "AMateria.hpp"

/////////////////// AMATERIA //////////////////////

AMateria::AMateria(AMateria& other){
    *this = other;
}

AMateria::AMateria(std::string const & type){
    _type = type;
}

std::string const & AMateria::getType() const{
    return this->_type;
}

void AMateria::use(ICharacter& target){
    std::cout << target.getName() << " use this AMateria method " << std::endl;
}

AMateria& AMateria::operator=(AMateria& other){
    if (this->_type == other.getType())
        this->_type = other.getType();
    return *this;
}

AMateria::~AMateria(){
    
}
