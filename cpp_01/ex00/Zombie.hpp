/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:31:42 by acanterg          #+#    #+#             */
/*   Updated: 2022/03/08 09:35:26 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {

private:
	std::string _name;

public:
	Zombie();
	Zombie(std::string name);
	~Zombie();
	void announce();

};

void randomChump(std::string name);
Zombie *newZombie(std::string name);

#endif
