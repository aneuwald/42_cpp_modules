/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 17:48:32 by acanterg          #+#    #+#             */
/*   Updated: 2022/03/08 10:56:34 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _fpNumber(0) {
	//std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::~Fixed() {
	//std::cout << "Destructor called" << std::endl;
	return;
}

Fixed::Fixed(const Fixed &fixed) {
	//std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
	return;
}

Fixed::Fixed(const int num) {
	//std::cout << "Int constructor called" << std::endl;
	_fpNumber = num * pow(2, _fractionalBits);
	return;
}

Fixed::Fixed(const float num) {
	//std::cout << "Float constructor called" << std::endl;
	_fpNumber = roundf(num * pow(2, _fractionalBits));
	return;
}

Fixed & Fixed::operator= (const Fixed &fixed) {
	//std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fixed)
		_fpNumber = fixed.getRawBits();
	return (*this);
}

Fixed Fixed::operator+ (const Fixed &rhs) const {
	//std::cout << "Plus operator called" << std::endl;
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed Fixed::operator- (const Fixed &rhs) const {
	//std::cout << "Minus operator called" << std::endl;
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed Fixed::operator* (const Fixed &rhs) const {
	//std::cout << "Multiplication operator called" << std::endl;
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed Fixed::operator/ (const Fixed &rhs) const {
	//std::cout << "Division operator called" << std::endl;
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

Fixed Fixed::operator% (const Fixed &rhs) const {
	//std::cout << "Division operator called" << std::endl;
	return (Fixed(this->toInt() % rhs.toInt()));
}

bool Fixed::operator> (const Fixed &rhs) {
	//std::cout << "Greater than operator called" << std::endl;
	return (_fpNumber > rhs.getRawBits());
}

bool Fixed::operator< (const Fixed &rhs) {
	//std::cout << "Smaller than operator called" << std::endl;
	return (_fpNumber < rhs.getRawBits());
}

bool Fixed::operator>= (const Fixed &rhs) {
	//std::cout << "Greater or equal than operator called" << std::endl;
	return (_fpNumber >= rhs.getRawBits());
}

bool Fixed::operator<= (const Fixed &rhs) {
	//std::cout << "Smaller or equal than operator called" << std::endl;
	return (_fpNumber <= rhs.getRawBits());
}

bool Fixed::operator== (const Fixed &rhs) {
	//std::cout << "Equal than operator called" << std::endl;
	return (_fpNumber == rhs.getRawBits());
}

bool Fixed::operator!= (const Fixed &rhs) {
	//std::cout << "Different than operator called" << std::endl;
	return (_fpNumber != rhs.getRawBits());
}

Fixed & Fixed::operator++() {
   _fpNumber++;
   return *this;
}

Fixed Fixed::operator++(int) {
   Fixed temp = *this;
   ++*this;
   return temp;
}

Fixed & Fixed::operator--() {
   _fpNumber--;
   return *this;
}

Fixed Fixed::operator--(int) {
	Fixed temp = *this;
	--*this;
	return temp;
}

Fixed const & Fixed::max (const Fixed &a, const Fixed &b) {
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

Fixed & Fixed::max (Fixed &a, Fixed &b) {
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

Fixed const & Fixed::min (const Fixed &a, const Fixed &b) {
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

Fixed & Fixed::min (Fixed &a, Fixed &b) {
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
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