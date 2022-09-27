/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 21:54:53 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/26 21:59:02 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure"){
}

Cure::Cure(Cure& other): AMateria(other.getType()){
}

AMateria* Cure:: clone() const {
    return new Cure();
}

void Cure::use(ICharacter& target){
    std::cout << "* heals " << target.getName() <<"'s"<< " wounds *$" << std::endl;
}

Cure::~Cure(){
}