#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

# include <iostream>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T> {

    public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;

		MutantStack();
		~MutantStack();
		MutantStack(const MutantStack<T> &mutantStack);
		MutantStack(const std::stack<T> &stack);
		MutantStack & operator= (const MutantStack<T> &mutantStack);

		iterator begin();
		iterator end();
		reverse_iterator rbegin();
		reverse_iterator rend();
};

# include "MutantStack.tpp"

#endif

