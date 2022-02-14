/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 17:48:32 by acanterg          #+#    #+#             */
/*   Updated: 2022/02/14 00:26:01 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Fixed sign (Point const p1, Point const p2, Point const p3)
{
    return (p1.getX().toFloat() - p3.getX().toFloat()) *
			(p2.getY().toFloat() - p3.getY().toFloat()) - 
			(p2.getX().toFloat() - p3.getX().toFloat()) *
			(p1.getY().toFloat() - p3.getY().toFloat());
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed d1, d2, d3;
    bool has_neg, has_pos;

    d1 = sign(point, a, b);
    d2 = sign(point, b, c);
    d3 = sign(point, c, a);

    has_neg = (d1 <= 0) || (d2 <= 0) || (d3 <= 0);
    has_pos = (d1 >= 0) || (d2 >= 0) || (d3 >= 0);

    return !(has_neg && has_pos);
}
