/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:53:14 by acanterg          #+#    #+#             */
/*   Updated: 2022/03/12 20:21:43 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DiamondTrap.hpp"

int main()
{
	std::cout << " == CONSTRUCTORS == " << std::endl;
	DiamondTrap a ("Arnold");
	DiamondTrap b;
	DiamondTrap c ("Warrior");

	std::cout << std::endl << " == A ACTIONS == " << std::endl;
	a.attack("Captain America");
	a.beRepaired(10);
	a.takeDamage(3);
	a.takeDamage(90);
	a.attack("Hulk");
	a.beRepaired(10);
	a.takeDamage(50);
	a.whoAmI();

	std::cout << std::endl << " == B ACTIONS == " << std::endl;
	b.attack("Iron Man");
	b.takeDamage(90);
	b.beRepaired(200);
	b.takeDamage(15);
	b.attack("Thor");
	b.whoAmI();
	
	std::cout << std::endl << " == C ENERGY TEST == " << std::endl;
	for (int i = 0; i < 52; i++)
		c.attack("ENERGY TEST");
	c.whoAmI();
	c.highFivesGuys();
	c.guardGate();

	std::cout << std::endl << " == DESTRUCTORS == " << std::endl;
	return(0);
    
}
