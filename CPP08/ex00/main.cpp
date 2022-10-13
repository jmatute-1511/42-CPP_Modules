/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:45:14 by jmatute-          #+#    #+#             */
/*   Updated: 2022/10/12 16:00:06 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "easyfind.hpp"

int main(void){

	std::vector<int> vect;

	for (size_t i = 0; i < 1000; i++)
	{
		vect.push_back(i);
	}
	unsigned int a = easyfind(vect, 999);
	return a;
	
}