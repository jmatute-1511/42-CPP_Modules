/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human_A.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 17:36:08 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/04 16:44:53 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP
#include "Weapon.hpp"
#include <iostream>

class Human_A
{
private:
	std::string		_name;
	Weapon&			_weapon;
	 
public:

	void        set_arg(std::string new_str);
	std::string get_arg();
	void        atack();
	Human_A(std::string name, Weapon& new_weapon);
	~Human_A();
};

#endif