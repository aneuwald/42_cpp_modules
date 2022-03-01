#include "Cat.hpp"

Cat::Cat(){
	std::cout << "[CAT] Default constructor called" << std::endl;
	_type = "Cat";
	_brain = new Brain();
	return;
}

Cat::~Cat() {
	std::cout << "[CAT] Destructor called" << std::endl;
	delete _brain;
	return;
}

Cat::Cat(const Cat &cat) : Animal() {
	std::cout << "[CAT] Copy constructor called" << std::endl;
	*this = cat;
	return;
}

Cat & Cat::operator= (const Cat &cat) {
	std::cout << "[CAT] Copy assignment operator called" << std::endl;
	if (this != &cat) {
		_type = cat._type;
		*_brain = *cat._brain;
	}
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "Meeeeeeeeoooooowwwwwwwwnnnnnn" << std::endl;
}
