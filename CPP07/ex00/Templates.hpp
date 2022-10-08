/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 20:36:15 by jmatute-          #+#    #+#             */
/*   Updated: 2022/10/08 15:29:25 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATES_HPP
#define TEMPLATES_HPP

#include <iostream>

template <typename T>
T& max (T& one, T& two){
	if (one > two)
		return one;
	return(two);
}

template <typename T>
T& min(T& one, T& two){
	if (one < two)
		return (one);
	return(two);
}

template <typename T>
void swap(T& one, T& two){
	T aux;
	aux = one;
	one = two;
	two = aux;
}
#endif