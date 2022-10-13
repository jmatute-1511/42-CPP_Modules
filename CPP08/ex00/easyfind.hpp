/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:02:22 by jmatute-          #+#    #+#             */
/*   Updated: 2022/10/12 15:59:29 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm> 
#include <vector>

class exception_notfound:public std::exception
{
	public:
	const char *what() const throw(){
		return "Not have ints with this number";
	}
};

template <typename T>
unsigned int easyfind(T& stl_data, int num){
	
	typename T::iterator it;
	try
	{
		it = std::find(stl_data.begin(), stl_data.end(), num);
		if(static_cast<int> (*stl_data.end()) == num || it != stl_data.end()){
			std::cout << "Element " << num << " found in this position " << static_cast<int> (*it) << std::endl;
			return static_cast<unsigned int> (*it);
		}
		else 
			throw exception_notfound();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return 0;
	}
	
}


#endif