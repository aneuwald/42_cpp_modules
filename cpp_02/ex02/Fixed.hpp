/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 17:47:21 by acanterg          #+#    #+#             */
/*   Updated: 2022/02/13 23:15:18 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {

private:
	int _fpNumber;
	static const int _fractionalBits = 8;
	
public:
	Fixed();
	~Fixed();
    Fixed (const Fixed &fixed);
	Fixed(const int num);
	Fixed(const float num);

    Fixed & operator= (const Fixed &fixed);

	Fixed operator+ (const Fixed &rhs) const;
	Fixed operator- (const Fixed &rhs) const;
	Fixed operator* (const Fixed &rhs) const;
	Fixed operator/ (const Fixed &rhs) const;

    bool operator> (const Fixed &rhs);
    bool operator< (const Fixed &rhs);
    bool operator>= (const Fixed &rhs);
    bool operator<= (const Fixed &rhs);
    bool operator== (const Fixed &rhs);
    bool operator!= (const Fixed &rhs);
	
	Fixed & operator++ ();       // Prefix increment operator.
	Fixed operator++ (int);     // Postfix increment operator.
	Fixed & operator-- ();       // Prefix decrement operator.
	Fixed operator-- (int);     // Postfix decrement operator.

	static Fixed const & max (const Fixed &a, const Fixed &b);
	static Fixed & max (Fixed &a, Fixed &b);
	static Fixed const & min (const Fixed &a, const Fixed &b);
	static Fixed & min (Fixed &a, Fixed &b);

	void setRawBits(int const raw);
	int getRawBits() const;

	float toFloat( void ) const;
	int toInt( void ) const;

};

std::ostream & operator<< (std::ostream & o, Fixed const & fixed);

#endif