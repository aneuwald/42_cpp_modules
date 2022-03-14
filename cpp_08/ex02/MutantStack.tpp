#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack() {
	//std::cout << "[MUTANTSTACK] Default constructor called" << std::endl;
}

template <typename T>
MutantStack<T>::~MutantStack() {
	//std::cout << "[MUTANTSTACK] Destructor called" << std::endl;
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &mutantStack) {
	//std::cout << "[MUTANTSTACK] Copy constructor called" << std::endl;
	*this = mutantStack;
}

template <typename T>
MutantStack<T> & MutantStack<T>::operator= (const MutantStack<T> &mutantStack) {
	//std::cout << "[MUTANTSTACK] Copy assignment operator called" << std::endl;
	if (this == &mutantStack)
		return (*this);
	this->c = mutantStack.c;
	return (*this);
}


template <typename T>
typename std::stack<T>::container_type::iterator MutantStack<T>::begin() {
	return (std::stack<T>::c.begin());
}

template <typename T>
typename std::stack<T>::container_type::iterator MutantStack<T>::end() {
	return (std::stack<T>::c.end());
}

template <typename T>
typename std::stack<T>::container_type::reverse_iterator MutantStack<T>::rbegin() {
	return (std::stack<T>::c.rbegin());
}

template <typename T>
typename std::stack<T>::container_type::reverse_iterator MutantStack<T>::rend() {
	return (std::stack<T>::c.rend());
}
