/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 18:50:56 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/19 21:47:58 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void){
    Point   A = Point(0.0f, 1.0f);
    Point   B = Point(-1.0f,-1.0f);
    Point   C = Point(1.0f, -1.0f);
    Point   point = Point(0.49f,0.0f);

    bool bolean = bsp(A,B,C,point);
    
    std::cout << bolean << std::endl;
}