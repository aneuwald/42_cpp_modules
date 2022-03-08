/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:53:14 by acanterg          #+#    #+#             */
/*   Updated: 2022/03/08 10:58:33 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	Fixed const c(Fixed(5.05f) + Fixed(2));
	Fixed const d(Fixed(5.05f) - Fixed(2));
	Fixed const e(Fixed(5.05f) / Fixed(2));
	Fixed const f(Fixed(5.05f) % Fixed(2));
	
	std::cout << "\n===== ARITHMETIC & INCREMENT/DECREMENT =====" << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;
	std::cout << e << std::endl;
	std::cout << f << std::endl;

	std::cout << "\n===== COMPARISONS =====" << std::endl;
	std::cout << ((Fixed(7) > Fixed(2) == true) ? "Yep" : "Nop") << std::endl;
	std::cout << ((Fixed(2) >= Fixed(2) == true) ? "Yep" : "Nop") << std::endl;
	std::cout << ((Fixed(2) < Fixed(1) == true) ? "Yep" : "Nop") << std::endl;
	std::cout << ((Fixed(2) <= Fixed(5) == true) ? "Yep" : "Nop") << std::endl;
	std::cout << ((Fixed(42) != Fixed(42.0f) == true) ? "Yep" : "Nop") << std::endl;
	std::cout << ((Fixed(423.32f) != Fixed(423) == true) ? "Yep" : "Nop") << std::endl;
	std::cout << ((Fixed(10) % Fixed(4) == 2) ? "Yep" : "Nop") << std::endl;
	return 0;
}
