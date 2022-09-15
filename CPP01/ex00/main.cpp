/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 17:28:13 by jmatute-          #+#    #+#             */
/*   Updated: 2022/08/31 17:50:13 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

int main(void){

    Zombie  Michael_Jackson;
    Zombie *new_zombie;
    
    Michael_Jackson.anounce();
    
    new_zombie = newZombie("Billy Butcherson");
    new_zombie->anounce();
    randomChump("Ed");
    new_zombie->~Zombie();
}