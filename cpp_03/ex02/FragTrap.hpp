/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 09:51:01 by acanterg          #+#    #+#             */
/*   Updated: 2022/02/14 10:21:35 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap  {

private:
	
public:
	FragTrap();
	FragTrap(std::string const name);
	~FragTrap();
    FragTrap (const FragTrap &fragTrap);
    FragTrap & operator= (const FragTrap &fragTrap);

	void highFivesGuys();

};

#endif

