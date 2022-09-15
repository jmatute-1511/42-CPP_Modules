/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 17:01:20 by jmatute-          #+#    #+#             */
/*   Updated: 2022/08/31 17:40:59 by jmatute-         ###   ########.fr       */
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
		
	private:
		std::string		_name;
	
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif