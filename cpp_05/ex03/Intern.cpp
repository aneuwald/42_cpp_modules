#include "Intern.hpp"

#define FORM_PRES "Presidential Pardon Form"
#define FORM_ROBO "Robotomy Request Form"
#define FORM_SHRU "Shrubbery Creation Form"

#define FORM_MAX 3

Intern::Intern()
{
	// std::cout << "[INTERN] Default constructor called" << std::endl;
	return;
}

Intern::~Intern()
{
	// std::cout << "[INTERN] Destructor called" << std::endl;
	return;
}

Intern::Intern(const Intern &intern)
{
	// std::cout << "[INTERN] Copy constructor called" << std::endl;
	*this = intern;
	return;
}

Intern &Intern::operator=(const Intern &intern)
{
	// std::cout << "[INTERN] Copy assignment operator called" << std::endl;
	(void)intern;
	return (*this);
}

Form *Intern::makeForm(const std::string &formName, const std::string &target)
{
	int index = -1;
	std::string options[] = {FORM_PRES, FORM_ROBO, FORM_SHRU};
	Form *(Intern::*arr_functions[])(const std::string &target) = {
		&Intern::MakePresidentialPardonForm,
		&Intern::MakeRobotomyRequestForm,
		&Intern::MakeShrubberyCreationForm
	};

	for (int i = 0; i < MAX_OPTIONS; i++)
		if (options[i] == formName)
			index = i;

	if (index == -1)
	{
		std::cout << "You should fire this intern! " << formName << " never ever EVER existed!" << std::endl;
		return (0);
	}

	std::cout << "Intern created a " << formName << std::endl;
	return ((this->*arr_functions[index])(target));

	return (0);
}

Form *Intern::MakePresidentialPardonForm(const std::string &target)
{
	return (new PresidentialPardonForm(target));
}

Form *Intern::MakeRobotomyRequestForm(const std::string &target)
{
	return (new RobotomyRequestForm(target));
}

Form *Intern::MakeShrubberyCreationForm(const std::string &target)
{
	return (new ShrubberyCreationForm(target));
}