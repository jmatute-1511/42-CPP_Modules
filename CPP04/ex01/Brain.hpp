/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 20:46:18 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/23 21:02:57 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	private:
		std::string		_ideas[100];
	public:
		std::string	get_ideas(int index) const;
		void set_ideas(int index, std::string other);
		Brain();
		Brain(Brain const & other);
		~Brain();
	Brain& operator=(Brain const & other);		
};

#endif