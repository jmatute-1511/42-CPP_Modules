/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 07:39:54 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/18 08:01:11 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Claptrap.hpp"

int  main(){
    Claptrap Joe = Claptrap("JOE");
    Claptrap Adan = Claptrap("ADAN");

    Joe.set_atack_damage(3);
    Joe.attack("escopeta");
    Adan.set_atack_damage(9);
    Adan.attack("metralleta");
    Adan.takeDamage(3);
    Joe.takeDamage(9);
    Adan.attack("cuchillo");
    Adan.set_atack_damage(6);
    Joe.takeDamage(6);
    Joe.beRepaired(9);
    Adan.beRepaired(6);
}