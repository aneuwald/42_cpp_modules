/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:57:11 by acanterg          #+#    #+#             */
/*   Updated: 2022/02/08 00:48:42 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(): _size(0) {
	//std::cout << "Constructor PhoneBook called!" << std::endl;
	//this->_size = 0;
	return;
}

PhoneBook::~PhoneBook() {
	//std::cout << "Destructor PhoneBook called!" << std::endl;
	return;
}

void PhoneBook::add() {
	if (this->_size == MAX_CONTACTS) this->_size--;
	this->_contacts[this->_size].create(this->_size);
	if (this->_size < MAX_CONTACTS) this->_size++;
	return;
}

void PhoneBook::search() {
	int index;

	this->_printAll();

	std::cout << C_YELLOW << "Select the desired ID to print: " << C_END;
	std::cin >> index;
	
	if (std::cin.fail()) {
		std::cin.clear();
		std::cin.ignore(256,'\n');
		std::cout << C_RED << "Index should be an integer number!" << C_END << std::endl;
		return ;
	}

	if (index >= 0 && index < this->_size) {
		this->_contacts[index].showFull();
		return ;
	}

	std::cout << C_RED << "Index not found! Try use index -1 to check all the PhoneBook entries!" << C_END << std::endl;
	return;
}

void PhoneBook::_printAll() {
	std::cout << "        ID|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "--------------------------------------------" << std::endl;

	for (int i = 0; i < this->_size; i++) {
		this->_contacts[i].show();
	}
	return;
}