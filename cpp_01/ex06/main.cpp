/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:53:14 by acanterg          #+#    #+#             */
/*   Updated: 2022/02/09 14:58:41 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Karen.hpp"

int main(int argc, char** argv)
{
	Karen karen20;

	if (argc != 2)
	{
		std::cout << "Program should have 1 argument!" << std::endl;
		return (1);
	}
	argv++;
	karen20.complain(*argv);

	return(0);
    
}
