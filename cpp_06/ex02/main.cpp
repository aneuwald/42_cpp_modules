/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 11:57:12 by acanterg          #+#    #+#             */
/*   Updated: 2022/03/06 21:35:21 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "functions.h"

int main()
{
	std::cout << "\n===== RANDOM TESTS =====" << std::endl;
	for (int i = 0; i < 10; i++) {
		Base *ptr = generate();

		std::cout << "identify_ptr: ";
		identify(ptr);

		std::cout << "identify_ref: ";
		identify(*ptr);

		delete ptr;
	}

	std::cout << "\n===== ERROR TEST =====" << std::endl;
	
	std::cout << "identify_ptr: ";
	identify(0);

	std::cout << "identify_ref: ";
	identify(0);

	return (0);
}