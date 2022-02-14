/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 09:50:58 by acanterg          #+#    #+#             */
/*   Updated: 2022/02/14 10:11:13 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap() {
	std::cout << "Default ScavTrap constructor called" << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	_isGuardingGate = false;
	return;
}

ScavTrap::ScavTrap(std::string const name): ClapTrap(name) {
	std::cout << "Default ScavTrap constructor with param called. New name: " << name << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	_isGuardingGate = false;
	return;
}

ScavTrap::~ScavTrap() {
	std::cout << "Destructor called for ScavTrap " << _name << std::endl;
	return;
}

ScavTrap::ScavTrap(const ScavTrap &scavTrap): ClapTrap(scavTrap._name) {
	std::cout << "Copy constructor ScavTrap called" << std::endl;
	*this = scavTrap;
	return;
}

ScavTrap & ScavTrap::operator= (const ScavTrap &scavTrap) {
	std::cout << "Copy assignment ScavTrap operator called" << std::endl;
	if (this != &scavTrap) {
		_name = scavTrap._name;
		_hitPoints = scavTrap._hitPoints;
		_energyPoints = scavTrap._energyPoints;
		_attackDamage = scavTrap._attackDamage;
		_isGuardingGate = scavTrap._isGuardingGate;
	}
	return (*this);
}

void ScavTrap::attack(const std::string& target) {
	if (_hitPoints == 0) {
		std::cout << "ScavTrap " << _name << " is already dead. Zombies were in CPP_01 module!" << std::endl;
		return ;
	}
	if (_energyPoints == 0) {
		std::cout << "ScavTrap has no energy to attack. Good luck in the battle..." << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	_energyPoints--;
}

void ScavTrap::guardGate() {
	if (_hitPoints == 0) {
		std::cout << "ScavTrap " << _name << " is already dead. Do you really want him guarding your gate?" << std::endl;
		return ;
	}
	if (_hitPoints == 0) {
		std::cout << "ScavTrap " << _name << " is already dead. Do you really want him guarding your gate?" << std::endl;
		return ;
	}
	if (_isGuardingGate) {
		std::cout << "ScavTrap " << _name << " is already guarding the gate!" << std::endl;
		return ;
	}
	_isGuardingGate = true;
	std::cout << "ScavTrap " << _name << " is going to guard the gate for the rest of his life!" << std::endl;
}

