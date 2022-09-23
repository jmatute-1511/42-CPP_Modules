/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:57:46 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/23 20:44:22 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
class Cat: public Animal
{
	public:
		Cat();
		Cat(Cat const &  other);
		~Cat();
	void makeSound() const;
	Cat& operator=(Cat const & other);
};
#endif