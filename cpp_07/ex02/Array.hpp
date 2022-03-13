#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array {

private:
	T* _arr;
	size_t _size;

public:
	Array();
	~Array();
    Array (const Array &array);
    Array (size_t n);
    Array & operator= (const Array &array);
    T & operator[] (size_t index);
    T & operator[] (size_t index) const;

	size_t size() const;

	class IndexOutOfBoundsException : public std::exception
	{
		public:
			 char const* what() const throw ();
	};
};

# include "Array.tpp"

#endif

