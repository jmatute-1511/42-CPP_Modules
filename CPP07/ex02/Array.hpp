/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 20:51:55 by jmatute-          #+#    #+#             */
/*   Updated: 2022/10/08 21:49:34 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T>
class Array
{
	private:
	T *_array;
	unsigned int _num;
	public:
		Array(void){
			_array = NULL;
			_num = 0;
		};
		Array(const Array& other){
			*this = other;
		}
		Array(unsigned int n){
			if (n > 0){
				_array = new T[n]();
				_num = n;
			}
			else{
				_array = NULL;
				_num = 0;
			}
		}
		~Array(){
			if (_array != NULL)
				delete _array;
		};
	class Outrange: public std::exception{
		public:
		virtual const char *what() const throw(){
			return "Out of range. You are trying acces to element that not exist!";
		}
	};
	Array& operator = (const Array & other){
		if (_num != 0){
			std::cout << _num << std::endl;
			delete _array;
		}
		if (other._num > 0){
			_array = new T[other._num];
			for(unsigned int i = 0; i < other._num; i++){
				_array[i] = other._array[i];
			}
			_num = other._num;
		}
		else
			_array = NULL;
		return *this;
	}
	T & operator[](unsigned int i){
		if (i >= _num)
			throw Outrange();
		return _array[i];
	}
	unsigned int size() const{
		return _num;
	}
		
};
#endif