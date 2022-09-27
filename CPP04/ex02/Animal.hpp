/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:37:30 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/25 15:41:35 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal
{
	protected:
		std::string 	_type;
	public:
		std::string getType() const;
		virtual void makeSound()const  = 0; 
		Animal();
		Animal(std::string type);
		Animal(Animal const & other);
		virtual ~Animal();
	Animal& operator=(Animal const& other);
};

#endif