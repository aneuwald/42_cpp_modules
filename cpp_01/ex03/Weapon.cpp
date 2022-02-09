/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 17:48:32 by acanterg          #+#    #+#             */
/*   Updated: 2022/02/09 11:37:35 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): type(type) {
	return ;
}

Weapon::~Weapon() {
	return ;
}

std::string const & Weapon::getType() const {
	return (type);
}

void Weapon::setType(std::string newType) {
	type = newType;
}