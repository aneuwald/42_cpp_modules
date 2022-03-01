#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

# define MAX_IDEAS 100

class Brain {

private:
	std::string _ideas[MAX_IDEAS];
	
public:
	Brain();
	~Brain();
    Brain (const Brain &brain);
    Brain & operator= (const Brain &brain);

};

#endif

