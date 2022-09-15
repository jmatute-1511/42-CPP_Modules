/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 16:31:34 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/04 16:52:58 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human_A.hpp"
#include "Human_B.hpp"
#include "Weapon.hpp"

int main()
{
    {
        Weapon club = Weapon("crude spiked club");
        Human_A bob("Bob", club);
        bob.atack();
        club.set_type("some other type of club");
        bob.atack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        Human_B jim("Jim");
        jim.add_weapon(club);
        jim.atack();
        club.set_type("some other type of club");
        jim.atack();
    }
}