/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 17:48:32 by acanterg          #+#    #+#             */
/*   Updated: 2022/03/08 11:08:35 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): _x(0), _y(0) {
	return;
}

Point::~Point() {
	return;
}

Point::Point(const Point &point) {
	*this = point;
}

Point::Point(Fixed const x, Fixed const y): _x(x), _y(y) {
	return;
}

Point::Point(float x, float y): _x(Fixed(x)), _y(Fixed(y)) {
	return;
}

Point & Point::operator= (const Point &point) {
	if (this != &point) {
		_x = point.getX();
		_y = point.getY();
	}
	return (*this);
}

Fixed Point::getX() const{
	return (this->_x);
}
Fixed Point::getY() const {
	return (this->_y);
}