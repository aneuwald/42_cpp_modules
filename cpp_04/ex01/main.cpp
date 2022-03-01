/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 18:35:29 by acanterg          #+#    #+#             */
/*   Updated: 2022/03/01 19:02:22 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#define MAX_SIZE 8

int main()
{
	Animal *animals[MAX_SIZE];

	std::cout << "========= POPULATE ARRAY =========" << std::endl;
	for (int i = 0; i < MAX_SIZE; i++) {
		if (i < MAX_SIZE / 2) {
			animals[i] = new Cat;
		} else {
			animals[i] = new Dog;
		}
	}

	std::cout << std::endl << "========= DESTRUCTORS =========" << std::endl;
	for (int i = 0; i < MAX_SIZE; i++)
		delete animals[i];

	return 0;
}