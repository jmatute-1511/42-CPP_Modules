/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 17:52:31 by jmatute-          #+#    #+#             */
/*   Updated: 2022/10/06 18:51:18 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

typedef struct	Data{
	
	int interger;

}				Data;


uintptr_t serialize(Data *ptr){
	uintptr_t serial;
	serial = reinterpret_cast<uintptr_t>(ptr);
	return serial;
}

Data *deserialize(uintptr_t raw){
	Data *data;
	data = reinterpret_cast<Data*> (raw);
	return data;
}

int main(){
	Data data;
	uintptr_t ecrypt;
	
	data.interger = 20;
	
	ecrypt = serialize(&data);
	std::cout << &data  << std::endl;
	std::cout << &ecrypt << std::endl;
	Data* deserialdata = deserialize(ecrypt);
	std::cout << deserialdata << std::endl ;
}