/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 10:37:56 by acanterg          #+#    #+#             */
/*   Updated: 2022/03/02 16:01:17 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main () {

	std::cout << "===== DECLARATIONS =====" << std::endl;
	Bureaucrat bure1;
	Bureaucrat bure2("Theo");
	Bureaucrat bure3(49);
	Bureaucrat bure4("Philip", 150);

	std::cout << "\n===== PRINTING =====" << std::endl;
	std::cout << bure1 << std::endl;
	std::cout << bure2 << std::endl;
	std::cout << bure3 << std::endl;
	std::cout << bure4 << std::endl;

	std::cout << "\n===== ERROR's =====" << std::endl;
	try {
		bure1.decrementGrade(100);
		bure2.incrementGrade(50);
	} catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try {
		bure4.decrementGrade();
	} catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try {
		Bureaucrat bure5("Arnold", -50);
	} catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n===== PRINTING =====" << std::endl;
	std::cout << bure1 << std::endl;
	std::cout << bure2 << std::endl;
	std::cout << bure3 << std::endl;
	std::cout << bure4 << std::endl;

	std::cout << "\n===== END =====" << std::endl;
}