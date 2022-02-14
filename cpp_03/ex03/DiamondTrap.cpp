/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 09:50:58 by acanterg          #+#    #+#             */
/*   Updated: 2022/02/14 11:37:44 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): _name("Anonymous") {
	std::cout << "Default DiamondTrap constructor called" << std::endl;
	ClapTrap::_name = _name + "_clap_name";
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;

	return;
}

DiamondTrap::DiamondTrap(std::string const name) : _name(name) {
	std::cout << "Default DiamondTrap constructor with param called. New name: " << name << std::endl;
	ClapTrap::_name = name + "_clap_name";
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage =  FragTrap::_attackDamage;
	return;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "Destructor called for DiamondTrap " << _name << std::endl;
	return;
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondTrap):
	ClapTrap(diamondTrap._name + "_clap_name"),
	FragTrap(diamondTrap._name),
	ScavTrap(diamondTrap._name),
	_name(diamondTrap._name)
{
	std::cout << "Copy constructor DiamondTrap called" << std::endl;
	*this = diamondTrap;
	return;
}

DiamondTrap & DiamondTrap::operator= (const DiamondTrap &diamondTrap) {
	std::cout << "Copy assignment DiamondTrap operator called" << std::endl;
	if (this != &diamondTrap) {
		_name = diamondTrap._name;
		ClapTrap::_name = _name + "_clap_name";
		_hitPoints = diamondTrap._hitPoints;
		_energyPoints = diamondTrap._energyPoints;
		_attackDamage = diamondTrap._attackDamage;
	}
	return (*this);
}

void DiamondTrap::whoAmI() {
	if (_hitPoints == 0) {
		std::cout << "DiamondTrap " << _name << " is already dead. Have you ever seen a dead DiamonTrap talking?" << std::endl;
		return ;
	}
	std::cout << "My ClapTrap name is " << ClapTrap::_name << ", and my DiamondTrap name is " << _name << std::endl;
}

void DiamondTrap::attack( std::string const &target )
{
	ScavTrap::attack(target);
}

