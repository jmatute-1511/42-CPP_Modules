/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 15:43:54 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/18 00:34:22 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include"Fixed.hpp"

class Point
{
	private:
		Fixed const _cord_x;
		Fixed const _cord_y;
		
	public:
		float	get_x();
		float	get_y(); 
		Point();
		Point(const float x, float const y);
		Point(const Point& cpy);
		~Point();
	Point& operator=(Point& point);
	const Point& operator=(const Point& point);
};
bool bsp( Point const a, Point const b, Point const c, Point const point);
#endif

