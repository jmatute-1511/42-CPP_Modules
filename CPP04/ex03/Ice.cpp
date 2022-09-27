/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 21:41:21 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/26 21:52:09 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice():AMateria("ice"){
}

Ice::Ice(Ice& other):AMateria(other.getType()){
}

AMateria* Ice::clone() const {
    return new Ice();
}
void Ice::use(ICharacter& target){
    std::cout << "* shoots an ice bolt at "<< target.getName() <<" *$" << std::endl;
}
Ice::~Ice(){
    
}