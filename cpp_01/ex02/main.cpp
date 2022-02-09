/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:53:14 by acanterg          #+#    #+#             */
/*   Updated: 2022/02/08 17:38:12 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main() {

	std::string str = "HI THIS IS BRAIN";

	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Mem. Address str       -> " << &str << std::endl;
	std::cout << "Mem. Address stringPTR -> " << stringPTR << std::endl;
	std::cout << "Mem. Address stringREF -> " << &stringREF << std::endl;

	std::cout << "Val. Pointed str       -> " << str << std::endl;
	std::cout << "Val. Pointed stringPTR -> " << *stringPTR << std::endl;
	std::cout << "Val. Pointed stringREF -> " << stringREF << std::endl;

	return 0;
}

