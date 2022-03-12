/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 09:50:58 by acanterg          #+#    #+#             */
/*   Updated: 2022/03/12 20:19:33 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap() {
	std::cout << "[FRAGTRAP] Default constructor called" << std::endl;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;

	return;
}

FragTrap::FragTrap(std::string const name): ClapTrap(name) {
	std::cout << "[FRAGTRAP] Default constructor with param called. New name: " << name << std::endl;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	return;
}

FragTrap::~FragTrap() {
	std::cout << "[FRAGTRAP] Destructor called for " << _name << std::endl;
	return;
}

FragTrap::FragTrap(const FragTrap &fragTrap): ClapTrap(fragTrap._name) {
	std::cout << "[FRAGTRAP] Copy constructor called" << std::endl;
	*this = fragTrap;
	return;
}

FragTrap & FragTrap::operator= (const FragTrap &fragTrap) {
	std::cout << "[FRAGTRAP] Copy assignment operator called" << std::endl;
	if (this != &fragTrap) {
		_name = fragTrap._name;
		_hitPoints = fragTrap._hitPoints;
		_energyPoints = fragTrap._energyPoints;
		_attackDamage = fragTrap._attackDamage;
	}
	return (*this);
}

void FragTrap::highFivesGuys() {
	if (_hitPoints == 0) {
		std::cout << "FragTrap " << _name << " is already dead. Isn't a little bit strange?" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << _name << " is asking for a friendly high five! 🖐️" << std::endl;
}

