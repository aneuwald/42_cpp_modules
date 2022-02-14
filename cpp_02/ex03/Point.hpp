/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 17:47:21 by acanterg          #+#    #+#             */
/*   Updated: 2022/02/14 00:24:05 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include <cmath>
# include "Fixed.hpp"

class Point {

private:
	Fixed x;
	Fixed y;
	
public:
	Point();
	Point(Fixed const x, Fixed const y);
	~Point();
    Point (const Point &Point);
    Point & operator= (const Point &point);

	Fixed getX() const;
	Fixed getY() const;
};

Fixed sign (Point const p1, Point const p2, Point const p3);
bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif