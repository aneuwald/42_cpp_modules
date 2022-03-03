#include "PresidentialPardonForm.hpp"

# define SIGN_GRADE 25
# define EXEC_GRADE 5
# define FORM_NAME "presidentialPardon"

PresidentialPardonForm::PresidentialPardonForm() :
	Form (FORM_NAME, SIGN_GRADE, EXEC_GRADE),
	_target("No specific target")
{
	//std::cout << "[PRESIDENTIALPARDONFORM] Default constructor called" << std::endl;
	return;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) :
	Form (FORM_NAME, SIGN_GRADE, EXEC_GRADE),
	_target(target)
{
	//std::cout << "[PRESIDENTIALPARDONFORM] Default constructor called" << std::endl;
	return;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	//std::cout << "[PRESIDENTIALPARDONFORM] Destructor called" << std::endl;
	return;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &presidentialPardonForm) :
	Form (FORM_NAME, SIGN_GRADE, EXEC_GRADE)
{
	//std::cout << "[PRESIDENTIALPARDONFORM] Copy constructor called" << std::endl;
	*this = presidentialPardonForm;
	return;
}

PresidentialPardonForm & PresidentialPardonForm::operator= (const PresidentialPardonForm &presidentialPardonForm) {
	//std::cout << "[PRESIDENTIALPARDONFORM] Copy assignment operator called" << std::endl;
	if (this != &presidentialPardonForm) {
		_target = presidentialPardonForm.getTarget();
	}
	return (*this);
}

std::string PresidentialPardonForm::getTarget() const {
	return (this->_target);
}

void PresidentialPardonForm::executeAction() const {
	std::cout << getTarget() << " has pardoned by Zaphod Beeblebrox! 😽" << std::endl;
}