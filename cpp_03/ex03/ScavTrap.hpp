/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 09:51:01 by acanterg          #+#    #+#             */
/*   Updated: 2022/02/14 11:25:59 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap  {

private:
	bool _isGuardingGate;
	
public:
	ScavTrap();
	ScavTrap(std::string const name);
	~ScavTrap();
    ScavTrap (const ScavTrap &scavTrap);
    ScavTrap & operator= (const ScavTrap &scavTrap);

	void guardGate();
	void attack(const std::string& target);

};

#endif

