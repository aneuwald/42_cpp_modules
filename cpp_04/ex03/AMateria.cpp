#include "AMateria.hpp"

AMateria::AMateria(): _type("Darkness type") {
	//std::cout << "[AMATERIA] Default constructor called" << std::endl;
	return;
}


AMateria::AMateria(std::string const & type): _type(type) {
	//std::cout << "[AMATERIA] Default constructor with type called" << std::endl;
	return;
}

AMateria::~AMateria() {
	//std::cout << "[AMATERIA] Destructor called" << std::endl;
	return;
}

AMateria::AMateria(const AMateria &aMateria) {
	//std::cout << "[AMATERIA] Copy constructor called" << std::endl;
	*this = aMateria;
	return;
}

AMateria & AMateria::operator= (const AMateria &aMateria) {
	//std::cout << "[AMATERIA] Copy assignment operator called" << std::endl;
	if (this != &aMateria) {
		_type = aMateria._type;
	}
	return (*this);
}

std::string const & AMateria::getType() const {
	return this->_type;
}

void AMateria::use(ICharacter& target)
{
	std::cout << "* AMateria used on " << target.getName() << " *" << std::endl;
}