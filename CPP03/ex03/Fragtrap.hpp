/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fragtrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 01:25:52 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/20 19:14:28 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "Claptrap.hpp"

class Fragtrap: virtual public Claptrap
{
	public:
		void	attack(std::string const & target);
		void	highFivesGuys(void);
		Fragtrap();
		Fragtrap(std::string name);
		Fragtrap(Fragtrap const & other);
		~Fragtrap();
		
	Fragtrap& operator = (Fragtrap const & other);
};

#endif