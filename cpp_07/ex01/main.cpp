/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 21:39:42 by acanterg          #+#    #+#             */
/*   Updated: 2022/03/07 09:22:35 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

void	printPlus10(int const &i) {
	std::cout << i + 10 << std::endl;
}

void	printUpper(std::string const &str) {
	for (std::string::size_type i = 0; i < str.size(); i++)
		std::cout << (char)std::toupper(str[i]);
	std::cout << std::endl;
}

void	transformLower(std::string &str) {
	for (std::string::size_type i = 0; i < str.size(); i++)
		str[i] = (char)std::tolower(str[i]);
}

int main() {
	int arr[] = { 0, 1, 2, 3, 4 };
	float arr_f[] = {4.2f, 42.0f, 0, .42f };
	std::string arr_str[] = {"C++", "Module", "07", "ex", "01", "ITER!" };

	std::cout << "\n===== PRINTING DEFINED VALUES =====" << std::endl;
	std::cout << "*** INT ***" << std::endl;
	::iter(arr, 5, printGeneric<int>);
	std::cout << "*** FLOAT ***" << std::endl;
	::iter(arr_f, 4, printGeneric<float>);
	std::cout << "*** STRING ***" << std::endl;
	::iter(arr_str, 6, printGeneric<std::string>);
	std::cout << "*** STRING UPPER ***" << std::endl;
	::iter(arr_str, 6, printUpper);

	std::cout << "\n===== INCREMENT NUMBER VALUES =====" << std::endl;
	::iter(arr, 5, incrementElement<int>);
	::iter(arr, 5, incrementElement<int>);
	::iter(arr_f, 4, incrementElement<float>);
	std::cout << "===== TRANSFORM STRINGS TO LOWERCASE VALUES =====" << std::endl;
	::iter(arr_str, 6, transformLower);

	std::cout << "\n===== PRINTING NEW VALUES =====" << std::endl;
	std::cout << "*** INT ***" << std::endl;
	::iter(arr, 5, printGeneric<int>);
	std::cout << "*** FLOAT ***" << std::endl;
	::iter(arr_f, 4, printGeneric<float>);
	std::cout << "*** STRING ***" << std::endl;
	::iter(arr_str, 6, printGeneric<std::string>);
	std::cout << "*** STRING UPPER ***" << std::endl;
	::iter(arr_str, 6, printUpper);
	
return 0;
}