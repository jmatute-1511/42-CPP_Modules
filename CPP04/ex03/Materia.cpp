/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:59:21 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/27 11:08:06 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Materia.hpp"


//////////////////////////////// MATERIA SOURCE //////////////////////////////

MateriaSource::MateriaSource(){
    for (size_t i = 0; i < 4; i++){
        this->_srcmateria[i] = NULL;
    }
}

MateriaSource::MateriaSource(MateriaSource& other){
    *this = other;
}

MateriaSource::~MateriaSource(){
    for (size_t i = 0; i < 4; i++){
        if (this->_srcmateria[i])
            delete this->_srcmateria[i];
    }
    
}

AMateria*   MateriaSource::createMateria(std::string const & type){
    for (size_t i = 0; i < 4; i++){
        if(type == this->_srcmateria[i]->getType())
            return  this->_srcmateria[i]->clone();
    }
    return NULL;
}

void    MateriaSource::learnMateria(AMateria* new_materia){
    for (size_t i = 0; i < 4; i++){
        if (this->_srcmateria[i] == NULL){
            this->_srcmateria[i] = new_materia;
            break;
        }
    }
}

MateriaSource& MateriaSource::operator=(MateriaSource& other){
    for (size_t i = 0; i < 4; i++){
        if (other._srcmateria[i])
            this->_srcmateria[i] = other._srcmateria[i]->clone();
    }
    return *this;
}