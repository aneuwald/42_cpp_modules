#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

# include <iostream>

class WrongAnimal {

protected:
	std::string _type;

public:
	WrongAnimal();
	virtual ~WrongAnimal();
    WrongAnimal (const WrongAnimal &wrongAnimal);
    WrongAnimal & operator= (const WrongAnimal &wrongAnimal);

	std::string getType() const;
	void makeSound() const;
};

#endif

