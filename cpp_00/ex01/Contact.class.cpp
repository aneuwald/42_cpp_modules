/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:57:59 by acanterg          #+#    #+#             */
/*   Updated: 2022/02/08 00:43:21 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact() {
	//std::cout << "Constructor Contact called!!" << std::endl;
	return;
}

Contact::~Contact() {
	//std::cout << "Destructur Contact called!!" << std::endl;
	return;
}

void Contact::create(int i) {
	
	this->_id = i;
	std::cout << "# First name: ";
	std::getline(std::cin >> std::ws, this->_firstName);
	std::cout << "# Last name: ";
	std::getline(std::cin >> std::ws, this->_lastName);
	std::cout << "# Nickname: ";
	std::getline(std::cin >> std::ws, this->_nickname);
	std::cout << "# Phone Number: ";
	std::getline(std::cin >> std::ws, this->_phoneNumber);
	std::cout << "# Darkest Secret: ";
	std::getline(std::cin >> std::ws, this->_darkestSecret);

	return;
}

void Contact::show() {

	std::cout << std::setw(10) << this->_id  << "|"
		<< std::setw(10) << getCompact(this->_firstName) << "|"
		<< std::setw(10) << getCompact(this->_lastName) << "|"
		<< std::setw(10) << getCompact(this->_lastName) << "|"
		<< std::endl;

	return;
}

std::string Contact::getCompact(std::string attr) {
	std::string s = attr;
	
	if (s.length() > 10) {
		s = attr.substr(0, 9);
		s.push_back('.');
		return (s);
	}
	return (s);

}

void Contact::showFull() {

		std::cout << "# ID: " << this->_id << std::endl;
		std::cout << "# First Name: " << this->_firstName << std::endl;
		std::cout << "# Last Name: " << this->_lastName << std::endl;
		std::cout << "# Nick Name: " << this->_nickname << std::endl;
		std::cout << "# Phone Number: " << this->_phoneNumber << std::endl;
		std::cout << "# Darkest Secret: " << this->_darkestSecret << std::endl;

	return;
}

