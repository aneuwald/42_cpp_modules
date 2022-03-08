/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 17:48:32 by acanterg          #+#    #+#             */
/*   Updated: 2022/03/08 10:13:20 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen()
{
	return;
}

Karen::~Karen()
{
	return;
}

void Karen::debug()
{
	std::cout << C_MAGENTA
	<< "[DEBUG] I love having extra vegan bacon for my vegan-7XL-double-vegan-cheese-triple-pickle-special-ketchup vegan burger. I really do!"
	<< C_END << std::endl;
}

void Karen::info()
{
	std::cout << C_CYAN
	<< "[INFO] I cannot believe adding extra vegan bacon costs more money. You didn’t put enough vegan bacon in my vegan burger! If you did, I wouldn’t be asking for more!"
	<< C_END << std::endl;
}

void Karen::warning()
{
	std::cout << C_YELLOW
	<< "[WARNING] I think I deserve to have some extra vegan bacon for free. I’ve been coming for years whereas you started working here since last month."
	<< C_END << std::endl;
}

void Karen::error()
{
	std::cout << C_RED
	<< "[ERROR] This is not vegan, unacceptable! I want to speak to the vegan manager now."
	<< C_END << std::endl;
}

void Karen::complain(std::string level)
{
	int index = -1;
	std::string options[] = {"DEBUG", "INFO", "WARNING", "ERROR" };
	
	// set index, if exist in options[]
	while (++index < MAX_OPTIONS)
		if (options[index] == level)
				break ;

	switch (index) {
		case DEBUG:
			Karen::debug();
		case INFO:
			Karen::info();
		case WARNING:
			Karen::warning();
		case ERROR:
			Karen::error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}

}