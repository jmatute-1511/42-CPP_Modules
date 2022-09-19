/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:37:25 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/19 21:35:52 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <ostream>

class Fixed
{
	private:
		int	_nb;
		static const int	_rawbit = 8;
		
	public:
		int getRawBits( void ) const;
		void setRawBits ( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
		Fixed();
		Fixed(int nb_int);
		Fixed(float nb_float);
		Fixed(const Fixed& newfix);

		void	operator = (Fixed const& fix);
		~Fixed();
};
std::ostream& operator<<(std::ostream & out, const Fixed &num);

#endif