/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:58:34 by jmatute-          #+#    #+#             */
/*   Updated: 2022/10/13 17:07:49 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int max_lenght){
	_max_lenght = max_lenght;
	_filled = 0;
}

Span::~Span(){}

void Span::sort_my_vector(){
	if (_my_vector.size() > 1){
		std::sort(_my_vector.begin(), _my_vector.end());
	}
}

void Span::addNumber(int num){
	
	if (_filled <  _max_lenght){
		_my_vector.push_back(num);
		sort_my_vector();
		_filled +=1;
	}
	else
		throw Filled_exception();
}

unsigned int Span::shortestSpan(){
	
	if (_my_vector.size() > 1){
		int diff = _my_vector[1] - _my_vector[0];
		return diff;
	}
	else
		throw NotSpan_exception();
	
	return 0;

}

unsigned int Span::longestSpan(){
	
	if (_my_vector.size() > 1){
		std::vector<int>::iterator it;
		it = _my_vector.end();
		it--;
		int diff = *it - _my_vector[0];
		return diff;
	}
	else
		throw NotSpan_exception();
	return 0;
}