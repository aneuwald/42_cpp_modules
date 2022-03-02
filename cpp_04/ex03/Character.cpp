#include "Character.hpp"

Character::Character() : _name("Anonymous") {
	//std::cout << "[CHARACTER] Default constructor called" << std::endl;
	for (int i = 0; i < MAX_INVENTORY; i++)
		_inventory[i] = 0;
	return;
}

Character::Character(const std::string name) : _name(name) {
	//std::cout << "[CHARACTER] Default constructor with parameters called" << std::endl;
	for (int i = 0; i < MAX_INVENTORY; i++)
		_inventory[i] = 0;
	return;
}

Character::~Character() {
	//std::cout << "[CHARACTER] Destructor called" << std::endl;
	for (int i = 0; i < MAX_INVENTORY; i++) {
		if (_inventory[i])
			delete _inventory[i];
	}
	return;
}

Character::Character(const Character &character) {
	//std::cout << "[CHARACTER] Copy constructor called" << std::endl;
	*this = character;
	return;
}

Character & Character::operator= (const Character &character) {
	//std::cout << "[CHARACTER] Copy assignment operator called" << std::endl;
	if (this != &character) {
		_name = character._name;
		for (int i = 0; i < MAX_INVENTORY; i++) {
			if (_inventory[i])
				delete _inventory[i];
			_inventory[i] = character._inventory[i]->clone();
		}
	}
	return (*this);
}

std::string const & Character::getName() const {
	return this->_name;
}

void Character::equip(AMateria *m) {
	for (int i = 0; i < MAX_INVENTORY; i++) {
		if (!_inventory[i]) {
			_inventory[i] = m;
			return;
		}
	}
}

void Character::unequip(int idx) {
	if (idx < 0 || idx >= MAX_INVENTORY)
		return ;
	_inventory[idx] = 0;
}

void Character::use(int idx, ICharacter &target) {
	if (idx < 0 || idx >= MAX_INVENTORY || !_inventory[idx])
		return ;
	_inventory[idx]->use(target);
}

