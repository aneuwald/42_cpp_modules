#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal {

private:
	Brain *_brain;

public:
	Cat();
	~Cat();
    Cat (const Cat &cat);
    Cat & operator= (const Cat &cat);
	
	void makeSound() const;

	
};

#endif

