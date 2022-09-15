/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 17:27:51 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/04 16:42:09 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
private:
    std::string     _type;
    
public:
    
    std::string     get_type();
    void            set_type(std::string new_type);
    
    Weapon(std::string Wname);
    ~Weapon();
};
#endif