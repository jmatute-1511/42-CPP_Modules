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

void Span::addNumber(std::vector<int>::iterator it, std::vector<int>::iterator end){
	
	while(it != end)
	{
		if (_filled <  _max_lenght){
			_my_vector.push_back((*it));
			sort_my_vector();
			_filled +=1;
		}
		else
			throw Filled_exception();
		it++;
	}
}

unsigned int Span::shortestSpan(){
	
	int n1, n2;
	int diff = static_cast<int> (*(_my_vector.end() - 1));
	std::vector<int>::iterator it = _my_vector.begin();
	std::vector<int>::iterator end = _my_vector.end();
	if (_my_vector.size() <= 1)
		throw NotSpan_exception();
	while (it != (end - 1 ))
	{
		if (diff > (*(it + 1))  - (*it))
		{
			n1 = (static_cast<int>(*it)) ;
			n2 = (static_cast<int>(*(it + 1)));
			diff = n2 - n1;
		}
		it++;
	}
	return diff;
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