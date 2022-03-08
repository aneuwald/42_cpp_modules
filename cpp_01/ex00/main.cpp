/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:53:14 by acanterg          #+#    #+#             */
/*   Updated: 2022/03/08 09:37:00 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main() {

	Zombie z0 = Zombie(); 
	Zombie z1 = Zombie("Theo"); 
	Zombie *z2 = new Zombie("Philip"); 
	Zombie *z3 = newZombie("OMG"); 

	z0.announce();
	z1.announce();
	(*z2).announce();
	z3->announce();
	
	randomChump("Zombieeeee");
	
	delete z2;
	delete z3;

	return 0;
}

