/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 13:26:33 by acanterg          #+#    #+#             */
/*   Updated: 2022/02/08 17:30:43 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <ctime>

Zombie::Zombie(): name("Unnamed yet!") {
	return;
}

Zombie::Zombie(std::string name): name(name) {
	return;
}

Zombie::~Zombie() {
	std::cout << name << ": Bye bye :(" << std::endl;
	return;
}

void Zombie::announce() {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name) {
	this->name = name;
}
