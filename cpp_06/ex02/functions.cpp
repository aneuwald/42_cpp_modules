/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 12:40:43 by acanterg          #+#    #+#             */
/*   Updated: 2022/03/15 01:24:27 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

# include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

bool srand_triggered = false;

Base * generate(void) {
	if (!srand_triggered)
		std::srand(time(0));
	srand_triggered = true;
	int prob = std::rand() % 3;

	switch (prob) {
	case 0:
		//std::cout << "A done" << std::endl;
		return (new A());
	case 1:
		//std::cout << "B done" << std::endl;
		return (new B());	
	default:
		//std::cout << "C done" << std::endl;
		return (new C());
	}
	std::cout << "Nothing generated? WHAT?!?!!??" << std::endl;
	return (0);
}

void identify(Base* p) {
	if (dynamic_cast<A*>(p))
		std::cout << "A";
	else if (dynamic_cast<B*>(p))
		std::cout << "B";
	else if (dynamic_cast<C*>(p))
		std::cout << "C";
	else
		std::cout << "?";
	std::cout << std::endl;
}

void identify(Base& p) {
	try {
		dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		return;
	}  catch (std::exception& e) {};
	try {
		dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		return;
	} catch (std::exception& e) {};
	try {
		dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		return;
	}  catch (std::exception& e) {};
	
	std::cout << "?" << std::endl;
}
