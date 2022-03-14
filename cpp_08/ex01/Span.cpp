#include "Span.hpp"

Span::Span(): _maxSize(0) {
	//std::cout << "[SPAN] Default constructor called" << std::endl;
	return;
}

Span::Span(unsigned int maxSize): _maxSize(maxSize) {
	//std::cout << "[SPAN] Default constructor called" << std::endl;
	return;
}

Span::~Span() {
	//std::cout << "[SPAN] Destructor called" << std::endl;
	return;
}

Span::Span(const Span &span) {
	//std::cout << "[SPAN] Copy constructor called" << std::endl;
	*this = span;
	return;
}

Span & Span::operator= (const Span &span) {
	//std::cout << "[SPAN] Copy assignment operator called" << std::endl;
	if (this != &span) {
		_vector = span._vector;
		_maxSize = span._maxSize;
	}
	return (*this);
}

void Span::addNumber(int nb) {

	if (_vector.size() >= _maxSize)
		throw Span::MaxCapacityException();

	_vector.push_back(nb);
	_maxSize++;
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (_vector.size() + std::distance(begin, end) > _maxSize)
		throw Span::MaxCapacityException();

	_vector.insert(_vector.end(), begin, end);
}

int Span::shortestSpan() {
	std::vector<int>::iterator it;
	int	shortest = INT_MAX;
	if (_vector.size() < 2)
		throw Span::NotEnoughNumbersException();

	std::sort(_vector.begin(), _vector.end());

	for (it = _vector.begin() + 1; it != _vector.end(); it++) {
		if (*it - *(it - 1) < shortest)
			shortest = *it - *(it - 1);
	}
	return (shortest);
}

int Span::longestSpan() {
	std::pair<std::vector<int>::iterator, std::vector<int>::iterator> pair;

	if (_vector.size() < 2)
		throw Span::NotEnoughNumbersException();

	pair.first = std::min_element(_vector.begin(), _vector.end());
	pair.second = std::max_element(_vector.begin(), _vector.end());

	return (*(pair.second) - *(pair.first));
}

char const * Span::MaxCapacityException::what() const throw() {
	return ("You reached the limit of this class, go create another one");
}

char const * Span::NotEnoughNumbersException::what() const throw() {
	return ("You need to add more numbers to call this method");
}

