#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type("Raw WrongAnimal") {
	std::cout << "[WRONG ANIMAL] Default constructor called" << std::endl;
	return;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "[WRONG ANIMAL] Destructor called" << std::endl;
	return;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wrongAnimal) {
	std::cout << "[WRONG ANIMAL] Copy constructor called" << std::endl;
	*this = wrongAnimal;
	return;
}

WrongAnimal & WrongAnimal::operator= (const WrongAnimal &wrongAnimal) {
	std::cout << "[WRONG ANIMAL] Copy assignment operator called" << std::endl;
	if (this != &wrongAnimal) {
		_type = wrongAnimal._type;
	}
	return (*this);
}

std::string WrongAnimal::getType() const {
	return (this->_type);
}

void WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal: Raaaaaawwwnn" << std::endl;
}
