/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 10:37:56 by acanterg          #+#    #+#             */
/*   Updated: 2022/03/15 09:42:16 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"


int main () {

	Bureaucrat bureaucrat("Theo", 1);
	Intern erick;
	Form *formPres;
	Form *formRobo;
	Form *formShru;
	Form *formWrong;

	std::cout << "\n===== INTERN CREATE FORMS =====" << std::endl;
	formPres = erick.makeForm("Presidential Pardon Form", "Philip");
	formRobo = erick.makeForm("Robotomy Request Form", "Sheldon");
	formShru = erick.makeForm("Shrubbery Creation Form", "Garden");
	formWrong = erick.makeForm("Game of Thrones Form", "Daenerys Targaryen");

	std::cout << "\n===== TESTING =====" << std::endl;
	bureaucrat.signForm(*formPres);
	bureaucrat.executeForm(*formPres);
	bureaucrat.signForm(*formRobo);
	bureaucrat.executeForm(*formRobo);
	bureaucrat.signForm(*formShru);
	bureaucrat.executeForm(*formShru);

	delete formPres;
	delete formRobo;
	delete formShru;

	return (0);
}