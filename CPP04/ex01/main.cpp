/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 17:41:46 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/26 19:25:17 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main(){

    Animal **Cats_Dogs = new Animal*[20];

    for(int it = 0;  it < 20;it++){
        if (it % 2 == 0)
            Cats_Dogs[it] = new Cat;
        else
            Cats_Dogs[it] = new Dog;    
    }
    std::cout << "------------------------------------------------------------------------" << std::endl;
    delete Cats_Dogs[0];
    Dog* cpy_Dog = dynamic_cast<Dog*>(Cats_Dogs[1]);
    Brain& brain1 = cpy_Dog->get_brain();
    brain1.set_ideas(1, "I'M A SUPER DOG");
    std::cout << brain1.get_ideas(1) << std::endl;
    Cats_Dogs[0] = new Dog(*cpy_Dog);
    Cats_Dogs[0]->makeSound();
    Dog* new_dog = dynamic_cast<Dog*>(Cats_Dogs[0]);
    Brain& brain2 = new_dog->get_brain();
    std::cout << brain2.get_ideas(1) << std::endl;
    brain2.set_ideas(1, "I'm not a Super Dog");
    std::cout << brain2.get_ideas(1) << std::endl;
    std::cout << "------------------------------------------------------------------------" << std::endl;
    for (size_t i = 0; i < 20; i++)
        delete Cats_Dogs[i];
    delete[] Cats_Dogs;
    system("leaks Animal");
}