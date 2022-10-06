/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 23:01:41 by jmatute-          #+#    #+#             */
/*   Updated: 2022/10/02 01:32:32 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert():_char(0), _int(0), _float(0), _double(0){
	_convert = NULL;
}

Convert::Convert(char *str):_char(0), _int(0), _float(0), _double(0){
	_convert = str;
}
Convert::~Convert(){}

bool Convert::parse_convert(std::string type){
	size_t end;
	
	long long raw = atoll(const_cast<const char *>(_convert));
	if (type == "double" && raw <= DBL_MAX && raw >= DBL_MIN){
		_double = std::stod(_convert,&end);
		std::cout << "double: " << _double << std::endl;
		return true;
	}
	if (type == "int" && raw <= INT_MAX && raw >= INT_MIN){
		double cast_int = std::stod(_convert,&end);
		_int = static_cast<int>(cast_int);
		std::cout << "int: " << _int << std::endl;
		return true;
	}
	if (type == "float" && raw <= FLT_MAX && raw >= FLT_MIN){
		double cast_float = std::stod(_convert,&end);
		_float = static_cast<float>(cast_float);
		std::cout << "float: "<< _float << "f" << std::endl;
		return true;
	}
	if (type == "char" && raw >= 32 && raw <= 126){
		double cast_char = std::stod(_convert,&end);
		_char = static_cast<char>(cast_char);
		std::cout << "char: " << _char << std::endl;
		return true;
	}
	return false;
}

void	Convert::str_convert(){
	if (parse_undefined(_convert))
		return;
	if (!parse_convert("char"))
		std::cout << "char: impossible" << std::endl;
	if (!parse_convert("int"))
		std::cout << "int: impossible" << std::endl;
	if (!parse_convert("float"))
		std::cout << "float: impossible" << std::endl;
	if (!parse_convert("double"))
		std::cout << "double: impossible" << std::endl;
}

bool Convert::parse_undefined(std::string str){
	if (str == "nan"){
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
		return true;
	}
	return false;
}