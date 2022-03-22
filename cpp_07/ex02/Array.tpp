#include "Array.hpp"

template <typename T>
Array<T>::Array():
	_arr(new T[0]),
	_size(0)
{
	std::cout << "[ARRAY] Default constructor called" << std::endl;
	return;
}

template <typename T>
Array<T>::Array(size_t n):
	_arr(new T[n]),
	_size(n)
{
	std::cout << "[ARRAY] Default constructor with parameters called" << std::endl;

	return;
}

template <typename T>
Array<T>::~Array() {
	std::cout << "[ARRAY] Destructor called" << std::endl;
	delete[] _arr;

	return;
}

template <typename T>
Array<T>::Array(const Array &array) :
	_arr(new T[array.size()]),
	_size(array.size()) 
{
	std::cout << "[ARRAY] Copy constructor called" << std::endl;
	for (size_t i = 0; i < _size; i++)
		_arr[i] = array._arr[i];
	return;
}

template <typename T>
Array<T> & Array<T>::operator= (const Array<T> &array) {
	std::cout << "[ARRAY] Copy assignment operator called" << std::endl;
	if (this == &array)
		return (*this);

	delete[] _arr;
	_size = array.size();
	_arr = new T[_size];
	for (size_t i = 0; i < _size; i++)
		_arr[i] = array[i];
	return (*this);
}

template <typename T>
T & Array<T>::operator[] (size_t index) {
	if (index >= _size)
		throw Array<T>::IndexOutOfBoundsException();
	return (_arr[index]);
}

template <typename T>
const T & Array<T>::operator[] (size_t index) const {
	if (index >= _size)
		throw Array<T>::IndexOutOfBoundsException();
	return (_arr[index]);
}

template <typename T>
size_t Array<T>::size() const {
	return (_size);
}

template <typename T>
char const * Array<T>::IndexOutOfBoundsException::what() const throw() {
	return ("Index way out of the limits!");
}
