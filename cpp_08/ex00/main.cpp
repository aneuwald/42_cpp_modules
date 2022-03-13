#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>

#include "easyfind.hpp"

# define C_RED "\033[1;31m"
# define C_GREEN "\033[1;32m"
# define C_END "\033[0m"

void test(std::vector<int> myVector, int el)
{
    std::cout << "\n======== EASYFIND " << el << " ========" << std::endl;
    std::vector<int>::iterator it = easyfind(myVector, el);

    if (it == myVector.end()) {
        std::cout << C_RED << "Element not found in myVector" << C_END << std::endl;
        return ;
    }

    std::cout << C_GREEN << "Element found in myVector: " << *it << C_END << std::endl;
    *it = 42;
    std::cout << "Replacing by 42 => [" << myVector[0] << ", " << myVector[1] << ", " << myVector[2] << ", " << myVector[3] << "]" << std::endl;
}


int main(int, char**)
{

    std::cout << "\n======== MY VECTOR ========" << std::endl;
    {
        int ints[] = { 10, 20, 30, 20 };
        std::vector<int> myVector (ints, ints+4);
        std::cout << "[" << myVector[0] << ", " << myVector[1] << ", " << myVector[2] << ", " << myVector[3] << "]" << std::endl;
        test(myVector, 10);
        test(myVector, 20);
        test(myVector, 30);
        test(myVector, 40);        
    }

    std::cout << "\n======== MY LIST ========" << std::endl;
    {
        std::list<int> myList;
        myList.push_back(10);
        myList.push_back(20);
        myList.push_back(30);
        myList.push_back(40);
        std::list<int>::iterator it = easyfind(myList, 20);
        if (it != myList.end())
            std::cout << C_GREEN << "Element found in myList: " << *it << C_END << std::endl;
        else
            std::cout << C_RED << "Element not found in myList" << C_END << std::endl;
    }

    std::cout << "\n======== MY DEQUE ========" << std::endl;
    {
        std::deque<int> myDeque;
        myDeque.push_back(10);
        myDeque.push_back(20);
        myDeque.push_back(30);
        myDeque.push_back(40);
        std::deque<int>::iterator it = easyfind(myDeque, 30);
        if (it != myDeque.end())
            std::cout << C_GREEN << "Element found in myDeque: " << *it << C_END << std::endl;
        else
            std::cout << C_RED << "Element not found in myDeque" << C_END << std::endl;
    }

    std::cout << std::endl;

    return 0;
}