/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:53:14 by acanterg          #+#    #+#             */
/*   Updated: 2022/02/17 09:48:17 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal *animal = new Animal();
	const Animal *dog = new Dog();
	const Animal *cat = new Cat();
	std::cout << animal->getType() << std::endl;
	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;
	animal->makeSound();
	dog->makeSound();
	cat->makeSound();

	delete animal;
	delete dog;
	delete cat;

	std::cout << std::endl << "========= WRONG ONES =========\n" << std::endl;

	const WrongAnimal *wrongAnimal = new WrongAnimal();
	const WrongAnimal *wrongCat = new WrongCat();

	std::cout << wrongAnimal->getType() << std::endl;
	std::cout << wrongCat->getType() << std::endl;
	wrongAnimal->makeSound();
	wrongCat->makeSound();

	delete wrongAnimal;
	delete wrongCat;
}
