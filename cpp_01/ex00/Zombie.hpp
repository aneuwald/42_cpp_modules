/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:31:42 by acanterg          #+#    #+#             */
/*   Updated: 2022/02/08 16:58:31 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {

public:

	Zombie(std::string name);
	~Zombie();
	void announce();

private:
	std::string name;
};

void randomChump(std::string name);
Zombie *newZombie(std::string name);

#endif
