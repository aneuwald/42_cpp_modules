/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 17:47:21 by acanterg          #+#    #+#             */
/*   Updated: 2022/03/08 09:42:11 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon {

private:
	std::string _type;
	
public:
	Weapon(std::string type);
	~Weapon();

	std::string const & getType() const;
	void setType(std::string newType);
};

#endif