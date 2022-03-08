/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 13:26:33 by acanterg          #+#    #+#             */
/*   Updated: 2022/03/08 09:36:36 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <ctime>

Zombie::Zombie() : _name("Anonymous") {
	return;
}

Zombie::Zombie(std::string name): _name(name) {
	return;
}

Zombie::~Zombie() {
	std::cout << _name << ": Bye bye :(" << std::endl;
	return;
}

void Zombie::announce() {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;

}
