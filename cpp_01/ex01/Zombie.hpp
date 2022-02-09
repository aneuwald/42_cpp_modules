/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:31:42 by acanterg          #+#    #+#             */
/*   Updated: 2022/02/08 17:47:36 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {

public:

	Zombie();
	Zombie(std::string name);
	~Zombie();
	void announce();
	void setName(std::string name);

private:
	std::string name;
};

Zombie *zombieHorde(int N, std::string name);

#endif
