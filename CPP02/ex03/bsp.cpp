/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 18:19:04 by jmatute-          #+#    #+#             */
/*   Updated: 2022/09/19 21:48:52 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"


float triangle_area( Point va, Point vb, Point vc)
{
    float a = (vc.get_y() - vb.get_y()) * ( va.get_x() - vb.get_x());
    float b = (vc.get_x() - vb.get_x()) * (va.get_y() - vb.get_y());
    float c = (a - b) * 0.5;
    if (c < 0)
        c *= -1;
    return c;
}

bool bsp( Point const A, Point const B, Point const C, Point const P )
{
    float ABC = triangle_area(A,B,C);
    
    float ABP = triangle_area(A,B,P);
    float ACP = triangle_area(A,C,P);
    float BCP = triangle_area(B,C,P);

    float total = ABP + ACP + BCP;
    
   if (ABC == 0.0f || ABP == 0.0f || ACP == 0.0f || BCP == 0.0f)
        return false;
    if ( total == ABC)
        return true;
    return false;
}