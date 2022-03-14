#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <exception>
# include <algorithm>
# include <vector>
# include <limits.h>

class Span {

private:
	std::vector<int> _vector;
	unsigned int _maxSize;
	Span();
	
public:
    Span (unsigned int maxSize);
	~Span();
    Span (const Span &span);
    Span & operator= (const Span &span);

	void addNumber(int nb);
	void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);

	int shortestSpan();
	int longestSpan();

	class MaxCapacityException : public std::exception
	{
		public:
			 char const* what() const throw ();
	};

	class NotEnoughNumbersException : public std::exception
	{
		public:
			 char const* what() const throw ();
	};

};

#endif

