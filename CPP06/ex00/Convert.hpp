/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 23:02:21 by jmatute-          #+#    #+#             */
/*   Updated: 2022/10/02 01:31:57 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <string>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

class Convert
{
	private:
		char	*_convert;
		char	_char;
		int		_int;
		float	_float;
		double	_double;
		
	public:
		Convert();
		Convert(char *str);
		~Convert();
	
	bool	parse_convert(std::string type);
	bool	parse_undefined(std::string str);
	void	str_convert();
};

#endif