/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 17:01:20 by jmatute-          #+#    #+#             */
/*   Updated: 2022/08/31 18:02:03 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <iostream>


class Zombie
{
	public:
		
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void	anounce(void);
		void	st_arg(std::string name);
		
	private:
		std::string		_name;
	
};

Zombie* zombieHorde( int N, std::string name );

#endif