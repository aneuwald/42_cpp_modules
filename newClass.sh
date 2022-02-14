#!/bin/bash

class=$1
class_lower=${class,}
class_upper=${class^^}

echo $class
echo $class_lower

echo "
#include \"$class.hpp\"

$class::$class(): _value(0) {
	std::cout << \"Default constructor called\" << std::endl;
	return;
}

$class::$class(int const value): _value(value) {
	std::cout << \"Default constructor with param called\" << std::endl;
	return;
}

$class::~$class() {
	std::cout << \"Destructor called\" << std::endl;
	return;
}

$class::$class(const $class &$class_lower) {
	std::cout << \"Copy constructor called\" << std::endl;
	*this = $class_lower;
	return;
}

$class & $class::operator= (const $class &$class_lower) {
	std::cout << \"Copy assignment operator called\" << std::endl;
	if (this != &$class_lower) {
		_value = $class_lower.getValue();
	}
	return (*this);
}

void $class::setValue (int const value) {
	std::cout << \"Setting value from \" << _value << \" to \" << value <<std::endl;
	_value = value;
}

int $class::getValue () const {
	std::cout << \"Getting value: \" << _value <<std::endl;
	return (_value);
}
" > "$class".cpp

echo "
#ifndef "$class_upper"_HPP
# define "$class_upper"_HPP

# include <iostream>

class $class {

private:
	int _value;
	
public:
	$class();
	$class(int const value);
	~$class();
    $class (const $class &$class_lower);
    $class & operator= (const $class &$class_lower);

	void setValue(int const value);
	int getValue() const;

};

#endif
" > $class.hpp