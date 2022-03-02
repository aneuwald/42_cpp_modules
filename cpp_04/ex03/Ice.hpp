#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria {

public:
	Ice();
	~Ice();
    Ice (const Ice &ice);
    Ice & operator= (const Ice &ice);

	AMateria* clone() const;
	void use(ICharacter& target);

};

#endif

