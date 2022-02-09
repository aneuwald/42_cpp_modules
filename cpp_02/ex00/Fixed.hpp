/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 17:47:21 by acanterg          #+#    #+#             */
/*   Updated: 2022/02/09 16:35:07 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {

private:
	int _fpNumber;
	static const int _fractionalBits = 8;
	
public:
	Fixed();
	~Fixed();
    Fixed (const Fixed &fixed);
    Fixed & operator= (const Fixed &fixed);

	void setRawBits(int const raw);
	int getRawBits() const;
};

#endif