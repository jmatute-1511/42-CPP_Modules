/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 17:28:13 by jmatute-          #+#    #+#             */
/*   Updated: 2022/08/31 18:21:56 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"
void escape(){
    system("leaks Zombies");
}
int main(void){

    Zombie *array;
    
    array = zombieHorde(10, "lolo");
    for (int it = 0; it < 10; it++)
        array[it].anounce();
    
    delete[] array;
    atexit(escape);
}