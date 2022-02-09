/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 17:48:32 by acanterg          #+#    #+#             */
/*   Updated: 2022/02/09 11:51:25 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) :
	name(name),
	weapon(0)
{
	return ;
}

HumanB::~HumanB() {
	return ;
}

void HumanB::attack() {
	if (weapon)
		std::cout << name << " attacks with their " << (*weapon).getType() << std::endl;
	else
		std::cout << name << " attacks with their hands :(" << std::endl;
}

void HumanB::setWeapon(Weapon &newWeapon) {
	weapon = &newWeapon;
}

