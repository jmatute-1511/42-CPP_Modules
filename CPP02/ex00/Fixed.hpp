/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:37:25 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/13 18:18:02 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int	_nb;
		static const int	_rawbit = 8;
		
	public:
		int getRawBits( void ) const;
		void setRawBits ( int const raw ); 
		Fixed();
		Fixed(Fixed& newfix);
		~Fixed();
	void	operator=(Fixed& fix);
};

#endif