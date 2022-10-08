/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:57:12 by jmatute-          #+#    #+#             */
/*   Updated: 2022/10/08 18:15:33 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"


template <typename T>
void power_of_two(T &base){
	base *= base;
}

int main(){

	int array[5] ={ 1, 2, 3, 4, 5};
	float array_f[5] ={ 1.456f, 2.765f, 3.535f, 4.5f, 5.65f};
	iter(array, 5, power_of_two);
	for (size_t i = 0; i < 5; i++){
		std::cout << array[i] << std::endl;
	}
	iter(array_f, 5, power_of_two);
	for (size_t i = 0; i < 5; i++){
		std::cout << array_f[i] << std::endl;
	}
	
}