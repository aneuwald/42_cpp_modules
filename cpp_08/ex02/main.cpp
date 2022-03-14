#include <iostream>

#include "MutantStack.hpp"

# define C_RED "\033[1;31m"
# define C_END "\033[0m"

int main()
{
    std::cout << "\n======== SUBJECT TEST CASE ========" << std::endl;
    {
        MutantStack<int> mstack;

        mstack.push(5);
        mstack.push(17);
        std::cout << "mstack.top() -> " << mstack.top() << std::endl;
        mstack.pop();
        std::cout << "mstack.size() -> "  << mstack.size() << std::endl;
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        //[...]
        mstack.push(0);
        
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        ++it;
        --it;

        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        std::stack<int> s(mstack);
    }

    std::cout << "\n======== REAL ITERATORS TEST CASE ========" << std::endl;
    {
        MutantStack<int> otherMutantStack;
        otherMutantStack.push(2);
        otherMutantStack.push(17);
        otherMutantStack.push(3);
        otherMutantStack.push(5);
        otherMutantStack.push(42);

        MutantStack<int> mutantStack = otherMutantStack;
        
        MutantStack<int>::iterator it = mutantStack.begin();
        MutantStack<int>::iterator ite = mutantStack.end();
        MutantStack<int>::reverse_iterator it_r = mutantStack.rbegin();
        MutantStack<int>::reverse_iterator ite_r = mutantStack.rend();

        std::cout << "--- NORMAL WAY ---" << std::endl;
        while (it != ite)
            std::cout << *(it++) << std::endl;

        std::cout << "--- REVERSE WAY ---" << std::endl;
        while (it_r != ite_r)
            std::cout << *(it_r++) << std::endl;

    }

    std::cout << std::endl;
    return 0;
}
