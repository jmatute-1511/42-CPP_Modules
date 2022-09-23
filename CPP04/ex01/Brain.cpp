/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 20:49:03 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/23 21:05:10 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"


Brain::Brain(){
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(Brain const & other){
    *this = other;
    std::cout << "Brain copy constructor called" << std::endl;
}

Brain::~Brain(){
    std::cout << "Brain destructor called" << std::endl;
}

std::string Brain::get_ideas(int index) const{
    if (index > 100 || index < 0){
        std::cout << "index is more big or smalll than lenght of array ideas" << std::endl;
        return NULL;
    }
    return this->_ideas[index];
}

void Brain::set_ideas(int index, std::string other){
    if(index > 100 || index < 0){
        std::cout << "Not have ides with this index" << std::endl;
    }
    else
        this->_ideas[index] = other;
}

Brain& Brain ::operator= (Brain const & other){
     for(int i = 0; i < 100; i++){
        this->_ideas[i] = other.get_ideas(i);
     }
}