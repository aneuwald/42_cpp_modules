#include "Brain.hpp"

Brain::Brain() {
	std::cout << "[BRAIN] Default constructor called" << std::endl;
	for (int i = 0; i < MAX_IDEAS; i++)
		_ideas[i] = "Have no idea!";
	return;
}

Brain::~Brain() {
	std::cout << "[BRAIN] Destructor called" << std::endl;
	return;
}

Brain::Brain(const Brain &brain) {
	std::cout << "[BRAIN] Copy constructor called" << std::endl;
	*this = brain;
	return;
}

Brain & Brain::operator= (const Brain &brain) {
	std::cout << "[BRAIN] Copy assignment operator called" << std::endl;
	if (this != &brain) {
		for (int i = 0; i < MAX_IDEAS; i++)
			_ideas[i] = brain._ideas[i];
	}
	return (*this);
}

