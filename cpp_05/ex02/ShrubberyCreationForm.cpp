#include "ShrubberyCreationForm.hpp"

# define SIGN_GRADE 145
# define EXEC_GRADE 137
# define FORM_NAME "shrubberyCreation"

ShrubberyCreationForm::ShrubberyCreationForm() :
	Form (FORM_NAME, SIGN_GRADE, EXEC_GRADE),
	_target("No specific target")
{
	//std::cout << "[BUREAUCRAT] Default constructor called" << std::endl;
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) :
	Form (FORM_NAME, SIGN_GRADE, EXEC_GRADE),
	_target(target)
{
	//std::cout << "[BUREAUCRAT] Default constructor called" << std::endl;
	return;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	//std::cout << "[BUREAUCRAT] Destructor called" << std::endl;
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &shrubberyCreationForm) :
	Form (FORM_NAME, SIGN_GRADE, EXEC_GRADE)
{
	//std::cout << "[BUREAUCRAT] Copy constructor called" << std::endl;
	*this = shrubberyCreationForm;
	return;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator= (const ShrubberyCreationForm &shrubberyCreationForm) {
	//std::cout << "[BUREAUCRAT] Copy assignment operator called" << std::endl;
	if (this != &shrubberyCreationForm) {
		_target = shrubberyCreationForm.getTarget();
	}
	return (*this);
}

std::string ShrubberyCreationForm::getTarget() const {
	return (this->_target);
}

void ShrubberyCreationForm::executeAction() const {
	std::string fileName = getTarget() + "_shrubbery";
	std::ofstream shrubberyFile (fileName.c_str());

	shrubberyFile
		<< "				,@@@@@@@, " << std::endl
		<< "		,,,.   ,@@@@@@/@@,  .oo8888o. " << std::endl
		<< "		,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o " << std::endl
		<< "	,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88' " << std::endl
		<< "	%&&%&%&/%&&%@@\\@@/ /@@@88888\\88888' " << std::endl
		<< "	%&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88' " << std::endl
		<< "	`&%\\ ` /%&'    |.|        \\ '|8' " << std::endl
		<< "	|o|        | |         | | " << std::endl
		<< "		|.|        | |         | | " << std::endl
		<< "		\\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_" << std::endl;
	 
	shrubberyFile.close();

}
