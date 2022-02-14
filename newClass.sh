#!/bin/bash

class=$1
class_lower=${class,}
class_upper=${class^^}

echo Creating $class class files...

echo "#include \"$class.hpp\"

$class::$class(): _value(0) {
	std::cout << \"Default constructor called\" << std::endl;
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
		_value = $class_lower._value;
	}
	return (*this);
}
" > "$class".cpp

echo "#ifndef "$class_upper"_HPP
# define "$class_upper"_HPP

# include <iostream>

class $class {

private:
	int _value;
	
public:
	$class();
	~$class();
    $class (const $class &$class_lower);
    $class & operator= (const $class &$class_lower);

};

#endif
" > $class.hpp