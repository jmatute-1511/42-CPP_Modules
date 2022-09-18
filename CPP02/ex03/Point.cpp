/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 16:06:10 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/18 00:06:38 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "Point.hpp"


Point::Point(): _cord_x(Fixed()), _cord_y(Fixed()){
    return ;
}

Point::Point(const float x , const float y): _cord_x(x), _cord_y(y){
    return ;
}

Point::Point(const Point& cpy): _cord_x(cpy._cord_x), _cord_y(cpy._cord_y){
    return ;
}
Point::~Point(){
    return ;
}
Point& Point::operator = (Point& point){
    return point;
}

const Point& Point::operator = (const Point& point){
    return point;
}
float Point::get_x(){
    return this->_cord_x.toFloat();
}
float Point::get_y(){
    return this->_cord_y.toFloat();
}
