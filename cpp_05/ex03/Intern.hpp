#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {

public:
	Intern();
	~Intern();
	Intern(const Intern &intern);
	Intern & operator= (const Intern &intern);

	static Form* makeForm(const std::string &formName, const std::string &target);
};

#endif

