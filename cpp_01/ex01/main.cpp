/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:53:14 by acanterg          #+#    #+#             */
/*   Updated: 2022/03/07 11:03:13 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main() {

	Zombie *zombies = zombieHorde(4, "José"); 

	zombies[0].announce();
	zombies[1].announce();
	zombies[2].announce();
	zombies[3].announce();
	
	delete [] zombies;

	return 0;
}

