/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 11:57:12 by acanterg          #+#    #+#             */
/*   Updated: 2022/03/15 01:22:23 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>

struct Data
{
	std::string name;
	int			age;
	bool		male;	
};

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

void printUser(Data user)
{
	std::cout << "Name: " << user.name << std::endl;
	std::cout << "Age: " << user.age << std::endl;
	std::cout << "Gender: " << (user.male ? "Male" : "Female") << std::endl; 
}

int main()
{
	Data user = { "Alexandre", 28, false };
	uintptr_t raw;

	std::cout << "\n===== PRINT DEFAULT =====" << std::endl;

	printUser(user);

	raw = serialize(&user);
	Data *converted = deserialize(raw);
	converted->name = "Flora";
	converted->age = 12;
	converted->male = false;

	std::cout << "\n===== POINTERS AND RAW =====" << std::endl;
	std::cout << "User mem. address" << &user << std::endl;
	std::cout << "Raw uintptr_t:" << raw << std::endl;
	std::cout << "Converted pointer: "<< converted << std::endl;

	std::cout << "\n===== PRINT AFTER CONVERT AND MODIFY =====" << std::endl;
	printUser(user);

	return (0);
}