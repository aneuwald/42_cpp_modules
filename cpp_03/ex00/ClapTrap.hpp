/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 09:00:50 by acanterg          #+#    #+#             */
/*   Updated: 2022/02/14 09:30:19 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {

private:
	std::string _name;
	int _hitPoints;
	int _energyPoints;
	int _attackDamage;
	
public:
	ClapTrap();
	ClapTrap(std::string const name);
	~ClapTrap();
    ClapTrap (const ClapTrap &clapTrap);
    ClapTrap & operator= (const ClapTrap &clapTrap);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

};

#endif

