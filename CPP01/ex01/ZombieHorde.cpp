/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 17:54:57 by jmatute-          #+#    #+#             */
/*   Updated: 2022/08/31 18:04:18 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
    Zombie *array;

    array = new Zombie[N];

    for (int it = 0; it  < N; it++){
        array[it].st_arg(name);
    }
    return array;
}