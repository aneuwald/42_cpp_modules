/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 18:02:01 by acanterg          #+#    #+#             */
/*   Updated: 2022/02/08 00:50:46 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include "PhoneBook.class.hpp"

int main()
{
	PhoneBook pb;
	std::string cmd;

	while(1)
	{
		std::cout << C_GREEN << "Enter a command: " << C_END;
		std::getline(std::cin >> std::ws, cmd);
		if (cmd == "EXIT")
			break;
		else if (cmd == "ADD")
			pb.add();
		else if (cmd == "SEARCH")
			pb.search();
		else
			std::cout << C_RED << "Command not found: " << cmd << " - Try ADD, SEARCH or EXIT" << C_END << std::endl;
	}
	
	return (0);
}