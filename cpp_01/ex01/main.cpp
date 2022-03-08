/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:53:14 by acanterg          #+#    #+#             */
/*   Updated: 2022/03/08 09:40:26 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#define NBR_ZOMBIES 3
#define NAME_ZOMBIES "Theo"

int	main() {

	Zombie *zombies = zombieHorde(NBR_ZOMBIES, NAME_ZOMBIES); 

	for (int i = 0; i < NBR_ZOMBIES; i++)
		zombies[i].announce();
	
	delete [] zombies;

	return 0;
}

