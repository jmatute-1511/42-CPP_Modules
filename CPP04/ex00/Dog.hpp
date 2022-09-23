/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:48:59 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/23 20:38:12 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

# include "Animal.hpp"

class Dog: public Animal
{
	public:
		Dog();
		Dog(Dog const & other);
		~Dog();
	void makeSound() const;
	Dog& operator=(Dog const & other);
};


#endif