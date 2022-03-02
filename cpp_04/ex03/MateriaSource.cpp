#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	//std::cout << "[MATERIASOURCE] Default constructor called" << std::endl;
	for (int i = 0; i < MAX_MATERIA; i++)
		_materias[i] = 0;
	return;
}

MateriaSource::~MateriaSource() {
	//std::cout << "[MATERIASOURCE] Destructor called" << std::endl;
	for (int i = 0; i < MAX_MATERIA; i++) {
		if (_materias[i])
			delete _materias[i];
	}
	return;
}

MateriaSource::MateriaSource(const MateriaSource &materiaSource) {
	//std::cout << "[MATERIASOURCE] Copy constructor called" << std::endl;
	*this = materiaSource;
	return;
}

MateriaSource & MateriaSource::operator= (const MateriaSource &materiaSource) {
	//std::cout << "[MATERIASOURCE] Copy assignment operator called" << std::endl;
	if (this != &materiaSource) {
		for (int i = 0; i < MAX_MATERIA; i++) {
			if (_materias[i])
				delete _materias[i];
			_materias[i] = materiaSource._materias[i]->clone();
		}
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m) {
	for (int i = 0; i < MAX_MATERIA; i++) {
		if (!_materias[i]) {
			_materias[i] = m;
			return;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < MAX_MATERIA; i++) {
		if (_materias[i] && _materias[i]->getType() == type)
			return (_materias[i]->clone());
	}
	return (0);
}
