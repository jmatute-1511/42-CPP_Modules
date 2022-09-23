/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:37:30 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/23 21:08:18 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string 	_type;
	public:
		std::string getType() const;
		virtual void makeSound()const ; 
		Animal();
		Animal(std::string type);
		Animal(Animal const & other);
		virtual ~Animal();
	Animal& operator=(Animal const& other);
};

#endif