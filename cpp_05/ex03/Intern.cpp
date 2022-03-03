#include "Intern.hpp"

# define FORM_PRES "Presidential Pardon Form"
# define FORM_ROBO "Robotomy Request Form"
# define FORM_SHRU "Shrubbery Creation Form"

# define FORM_MAX 3

Intern::Intern() {
	//std::cout << "[INTERN] Default constructor called" << std::endl;
	return;
}

Intern::~Intern() {
	//std::cout << "[INTERN] Destructor called" << std::endl;
	return;
}

Intern::Intern(const Intern &intern) {
	//std::cout << "[INTERN] Copy constructor called" << std::endl;
	*this = intern;
	return;
}

Intern & Intern::operator= (const Intern &intern) {
	//std::cout << "[INTERN] Copy assignment operator called" << std::endl;
	(void) intern;
	return (*this);
}

Form* Intern::makeForm(const std::string &formName, const std::string &target) {

	if (formName != FORM_PRES && formName != FORM_ROBO && formName != FORM_SHRU) {
		std::cout << "You should fire this intern! " << formName << " never ever EVER existed!" << std::endl;
		return (0);
	}

	std::cout << "Intern created a " << formName << std::endl;

	if (formName == FORM_PRES)
		return (new PresidentialPardonForm(target));
	if (formName == FORM_ROBO)
		return (new RobotomyRequestForm(target));
	if (formName == FORM_SHRU)
		return (new ShrubberyCreationForm(target));

	return (0);
}
