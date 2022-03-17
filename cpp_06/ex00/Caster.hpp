#ifndef CASTER_HPP
# define CASTER_HPP

# include <iostream>
# include <sstream>
# include <iomanip>
# include <limits>

enum type {
	T_CHAR,
	T_NUM,
	T_FLOAT,
	T_SPECIAL,
	T_SPECIAL_F,
	T_IMPOSSIBLE
};

class Caster {

private:
	double _value;
	type _type;
	std::string _input;

	Caster();
	
public:
	~Caster();
    Caster (const Caster &caster);
    Caster (const std::string &input);
    Caster & operator= (const Caster &caster);

	type getType();
	void setValue();

	void printConversions();
	void printChar();
	void printInt();
	void printFloat();
	void printDouble();

};

#endif

