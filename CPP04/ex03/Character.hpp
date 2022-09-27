/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:55:20 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/26 22:22:41 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character: public ICharacter
{
	private:
		std::string		_name;
		AMateria*		_lib_materia[4];
		
	public:
		Character();
		Character(std::string name);
		Character( Character& other);
		~Character();
		
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

		void	init_libmateria();
		void	delete_libmateria();
		void	clone_libamteria(Character& other);
		
		Character& operator=(Character& other);
};

#endif