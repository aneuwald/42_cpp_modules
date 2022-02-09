/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 17:47:21 by acanterg          #+#    #+#             */
/*   Updated: 2022/02/09 17:23:23 by acanterg         ###   ########.fr       */
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
	void setRawBits(int const raw);
	int getRawBits() const;

	float toFloat( void ) const;
	int toInt( void ) const;

};

std::ostream & operator<< (std::ostream & o, Fixed const & fixed);

#endif