/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 20:18:53 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/27 11:02:41 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

void    Character::init_libmateria(){
	for (size_t i = 0; i < 4; i++){
		this->_lib_materia[i] = NULL;
	}
}

void    Character::delete_libmateria(){
	for (size_t i = 0; i < 4; i++){
		if (this->_lib_materia[i] != NULL)
			delete _lib_materia[i];
	}
}

void	Character::clone_libamteria(Character& other){
	for (size_t i = 0; i < 4; i++){
		if (other._lib_materia[i])
			this->_lib_materia[i] = other._lib_materia[i]->clone();
		else
			this->_lib_materia[i] = NULL;
	}
	
}

Character::Character(): _name("Default Character name"){
	this->init_libmateria();
}

Character::Character(std::string name):_name(name){
	this->init_libmateria();
}

Character::Character(Character& other){
	this->_name = other.getName();
	this->init_libmateria();
	this->clone_libamteria(other);
}
Character& Character::operator=(Character& other){
	this->delete_libmateria();
	this->clone_libamteria(other);
	return *this;
}

std::string const &  Character::getName() const{
	return this->_name;
}

void Character::equip(AMateria* m){
	if (!m)
		return ;
	for (size_t i = 0; i < 4; i++){
		if (this->_lib_materia[i] == NULL){
			this->_lib_materia[i] = m;
			std::cout << this->_name << "!, " << m->getType() << " has been equiped " << std::endl;
			break;
		}
	}
}

void Character::unequip(int idx){
	if (this->_lib_materia[idx] && idx >= 0 && idx < 4){
		std::cout << this->_name << "!, " << this->_lib_materia[idx]->getType() << " has been unequiped " << std::endl;
		delete this->_lib_materia[idx];
		this->_lib_materia[idx] = NULL;
	}
}
void Character::use(int idx, ICharacter& target){
	if (idx > 3)
		return;
	if (this->_lib_materia[idx]){
		this->_lib_materia[idx]->use(target);
	}
}

Character::~Character(){
	for (size_t i = 0; i < 4; i++){
		if (this->_lib_materia[i])
			delete this->_lib_materia[i];
	}
}
