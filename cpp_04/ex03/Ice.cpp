#include "Ice.hpp"

Ice::Ice() {
	//std::cout << "[ICE] Default constructor called" << std::endl;
	this->_type = "ice";
	return;
}

Ice::~Ice() {
	//std::cout << "[ICE] Destructor called" << std::endl;
	return;
}

Ice::Ice(const Ice &ice) : AMateria() {
	//std::cout << "[ICE] Copy constructor called" << std::endl;
	*this = ice;
	return;
}

Ice & Ice::operator= (const Ice &ice) {
	//std::cout << "[ICE] Copy assignment operator called" << std::endl;
	if (this != &ice) {
		_type = ice._type;
	}
	return (*this);
}

AMateria* Ice::clone() const {
	return (new Ice(*this));
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}