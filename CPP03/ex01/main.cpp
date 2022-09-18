/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 07:39:54 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/18 08:51:08 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scavtrap.hpp"

int  main(){
    Claptrap    Joe = Claptrap("JOE");
    Claptrap    Adan = Claptrap("ADAN");
    Scavtrap    Maria = Scavtrap("MARIA");

    Joe.set_atack_damage(3);
    Joe.attack("escopeta");
    Adan.set_atack_damage(9);
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