/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 17:48:32 by acanterg          #+#    #+#             */
/*   Updated: 2022/02/14 08:24:05 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _fpNumber(0) {
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed::Fixed(const Fixed &fixed) {
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
	return;
}

Fixed::Fixed(const int num) {
	std::cout << "Int constructor called" << std::endl;
	_fpNumber = num * pow(2, _fractionalBits);
	return;
}

Fixed::Fixed(const float num) {
	std::cout << "Float constructor called" << std::endl;
	_fpNumber = roundf(num * pow(2, _fractionalBits));
	return;
}

Fixed & Fixed::operator= (const Fixed &fixed) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fixed)
		_fpNumber = fixed.getRawBits();
	return (*this);
}

std::ostream & operator<< (std::ostream & o, Fixed const & fixed) {
	o << fixed.toFloat();
	return (o);
}

int Fixed::getRawBits() const {
	//std::cout << "getRawBits member function called" << std::endl;
	return (_fpNumber);
}

void Fixed::setRawBits(int const raw) {
	_fpNumber = raw;
}

float Fixed::toFloat( ) const {
	return (_fpNumber / pow(2, _fractionalBits));
}

int Fixed::toInt( void ) const {
	return (_fpNumber / pow(2, _fractionalBits));
}