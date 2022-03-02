#include "Cure.hpp"

Cure::Cure() {
	//std::cout << "[CURE] Default constructor called" << std::endl;
	this->_type = "cure";
	return;
}

Cure::~Cure() {
	//std::cout << "[CURE] Destructor called" << std::endl;
	return;
}

Cure::Cure(const Cure &cure) : AMateria() {
	//std::cout << "[CURE] Copy constructor called" << std::endl;
	*this = cure;
	return;
}

Cure & Cure::operator= (const Cure &cure) {
	//std::cout << "[CURE] Copy assignment operator called" << std::endl;
	if (this != &cure) {
		_type = cure._type;
	}
	return (*this);
}

AMateria* Cure::clone() const {
	return (new Cure(*this));
}

void Cure::use(ICharacter& target) {
	std::cout << "* shoots an cure bolt at " << target.getName() << " *" << std::endl;
}