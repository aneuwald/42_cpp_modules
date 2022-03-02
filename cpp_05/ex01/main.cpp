/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 10:37:56 by acanterg          #+#    #+#             */
/*   Updated: 2022/03/02 16:02:47 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main () {

	std::cout << "===== DECLARATIONS =====" << std::endl;
	Bureaucrat bureaucrat("Philip", 120);
	Form form("G12", 150, 150);
	Form form2("F28", 64, 150);

	std::cout << "\n===== PRINTING =====" << std::endl;
	std::cout << bureaucrat << std::endl;
	std::cout << form << std::endl;
	std::cout << form2 << std::endl;

	std::cout << "\n===== SIGNING =====" << std::endl;
	try {
		bureaucrat.signForm(form);
		bureaucrat.signForm(form2);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	
	std::cout << "\n===== PRINTING =====" << std::endl;
	std::cout << bureaucrat << std::endl;
	std::cout << form << std::endl;
	std::cout << form2 << std::endl;

	std::cout << "\n===== INCREMENT AND SIGNING =====" << std::endl;
	try {
		bureaucrat.incrementGrade(110);
		bureaucrat.signForm(form);
		bureaucrat.signForm(form2);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n===== PRINTING =====" << std::endl;
	std::cout << bureaucrat << std::endl;
	std::cout << form << std::endl;
	std::cout << form2 << std::endl;

	std::cout << "\n===== END =====" << std::endl;
}