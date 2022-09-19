/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:37:25 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/19 21:37:42 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <ostream>
#include <cmath>

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
		
		bool	operator < ( Fixed const& n1) const ;
		bool	operator > ( Fixed const& n1) const;
		bool	operator >= (Fixed const& n1) const;
		bool	operator <= (Fixed const& n1) const;
		bool	operator == (Fixed const& n1) const;
		bool	operator != (Fixed const& n1) const;
		Fixed	operator + (Fixed const& n1) const;
		Fixed	operator - (Fixed const& n1) const;
		Fixed	operator * (Fixed const& n1) const;
		Fixed	operator / (Fixed const& n1) const;
		Fixed&	operator ++();
		Fixed	operator ++(int);
		Fixed&	operator --();
		Fixed	operator --(int);
		void	operator = (Fixed const& fix);


		static Fixed& min(Fixed& n1, Fixed& n2);
		static Fixed& max(Fixed& n1, Fixed& n2);
		static Fixed const& min(Fixed const & n1, Fixed const & n2);
		static Fixed const& max(Fixed const & n1, Fixed const & n2);
		
		Fixed();
		Fixed(int nb_int);
		Fixed(float nb_float);
		Fixed(const Fixed& newfix);
		
		~Fixed();
};

std::ostream& operator<<(std::ostream & out, const Fixed &num);

#endif