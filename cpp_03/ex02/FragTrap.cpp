/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 09:50:58 by acanterg          #+#    #+#             */
/*   Updated: 2022/02/14 10:28:11 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap() {
	std::cout << "Default FragTrap constructor called" << std::endl;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;

	return;
}

FragTrap::FragTrap(std::string const name): ClapTrap(name) {
	std::cout << "Default FragTrap constructor with param called. New name: " << name << std::endl;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	return;
}

FragTrap::~FragTrap() {
	std::cout << "Destructor called for FragTrap " << _name << std::endl;
	return;
}

FragTrap::FragTrap(const FragTrap &fragTrap): ClapTrap(fragTrap._name) {
	std::cout << "Copy constructor FragTrap called" << std::endl;
	*this = fragTrap;
	return;
}

FragTrap & FragTrap::operator= (const FragTrap &fragTrap) {
	std::cout << "Copy assignment FragTrap operator called" << std::endl;
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

