/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 18:35:29 by acanterg          #+#    #+#             */
/*   Updated: 2022/03/01 19:43:14 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#define MAX_SIZE 8

int main()
{
	Animal *cat = new Cat;
	Animal *dog = new Dog;

	cat->makeSound();
	dog->makeSound();

	delete cat;
	delete dog;

	return 0;
}