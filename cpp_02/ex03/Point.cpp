/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 17:48:32 by acanterg          #+#    #+#             */
/*   Updated: 2022/02/14 08:22:59 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): x(0), y(0) {
	return;
}

Point::~Point() {
	return;
}

Point::Point(const Point &point) {
	*this = point;
}

Point::Point(Fixed const x, Fixed const y): x(x), y(y) {
	return;
}

Point & Point::operator= (const Point &point) {
	if (this != &point) {
		x = point.getX();
		y = point.getY();
	}
	return (*this);
}

Fixed Point::getX() const{
	return (this->x);
}
Fixed Point::getY() const {
	return (this->y);
}