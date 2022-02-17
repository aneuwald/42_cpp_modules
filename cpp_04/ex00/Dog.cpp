#include "Dog.hpp"

Dog::Dog() {
	std::cout << "[DOG] Default constructor called" << std::endl;
	_type = "Dog";
	return;
}

Dog::~Dog() {
	std::cout << "[DOG] Destructor called" << std::endl;
	return;
}

Dog::Dog(const Dog &dog): Animal() {
	std::cout << "[DOG] Copy constructor called" << std::endl;
	*this = dog;
	return;
}

Dog & Dog::operator= (const Dog &dog) {
	std::cout << "[DOG] Copy assignment operator called" << std::endl;
	if (this != &dog) {
		_type = dog._type;
	}
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "Au Au... Auuuuuuuuuuuuuuuuuuuuuuu" << std::endl;
}

