#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "IMateriaSource.hpp"
# define MAX_MATERIA 4

class MateriaSource: public IMateriaSource {

private:
	AMateria* _materias[MAX_MATERIA];
	
public:
	MateriaSource();
	~MateriaSource();
    MateriaSource (const MateriaSource &materiaSource);
    MateriaSource & operator= (const MateriaSource &materiaSource);

	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);

};

#endif

