/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human_B.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 15:08:41 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/04 16:44:44 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP
#include "Weapon.hpp"
#include <iostream>

class Human_B
{
private:
    std::string    _name;
    Weapon          *_weapon;
     
public:

    void        set_arg(std::string new_str);
    std::string get_arg();
    void        add_weapon( Weapon nweapon);
    void        atack();
    Human_B(std::string new_name);
    ~Human_B();
};

#endif