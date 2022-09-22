/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 07:39:54 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/20 17:10:32 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fragtrap.hpp"

int  main(){
    Claptrap    Joe = Claptrap("JOE");
    Claptrap    Adan = Claptrap("ADAN");
    Fragtrap    Maria = Fragtrap("MARIA");

    Joe.set_atack_damage(3);
    Joe.attack("escopeta");
    Adan.set_atack_damage(9);
    Maria.highFivesGuys();
    Adan.attack("metralleta");
    Maria.set_atack_damage(8);
    Maria.attack("pistola");
    Adan.takeDamage(3);
    Adan.takeDamage(8);
    Joe.takeDamage(9);
    Adan.attack("cuchillo");
    Adan.set_atack_damage(6);
    Joe.beRepaired(9);
    Adan.beRepaired(6);
}