/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:53:14 by acanterg          #+#    #+#             */
/*   Updated: 2022/02/14 09:33:26 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int main()
{
	ClapTrap a ("Arnold");
	ClapTrap b;

	a.attack("Captain America");
	a.beRepaired(4);
	a.takeDamage(3);
	a.takeDamage(30);
	a.attack("Hulk");
	a.beRepaired(10);
	a.takeDamage(50);

	b.attack("Iron Man");
	b.takeDamage(9);
	b.beRepaired(2);
	b.takeDamage(3);
	b.attack("Thor");

	return(0);
    
}
