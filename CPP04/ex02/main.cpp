/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 17:41:46 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/27 10:47:58 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main(){

    Cat* Michi = new Cat;
    Dog* Firulais = new Dog;

    std::cout << "----------------------------------------------" << std::endl;
    std::cout <<  "Firulais is a " <<Firulais->getType() << std::endl;
    Brain& Brain_dog = Firulais->get_brain();
    Brain_dog.set_ideas(1, "I'm Firulais");
    std::cout << Brain_dog.get_ideas(1) << std::endl;
    std::cout << "Michi is a "<< Michi->getType() << std::endl;
    Brain& Brain_cat = Michi->get_brain();
    Brain_cat.set_ideas(1,"I'm Michi");
    std::cout << Brain_cat.get_ideas(1) << std::endl;
    std::cout << "----------------------------------------------" << std::endl;
    delete Michi;
    delete Firulais;
}