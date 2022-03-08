/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:53:14 by acanterg          #+#    #+#             */
/*   Updated: 2022/03/08 09:57:13 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

bool validation(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << C_RED << "You should provide 3 arguments: filename, s1 and s2!" << C_END << std::endl;
		return (false);
	}
	if (argv[1][0] == '\0' || argv[2][0] == '\0' || argv[3][0] == '\0')
	{
		std::cout << C_RED << "The arguments can't be null." << C_END << std::endl;
		return (false);
	}
	return (true);
}

int main(int argc, char** argv)
{
	File file;

	if (!validation(argc, argv)) return (1);
	
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	if (!file.openFile(filename)) return (1);
	file.replaceContent(s1, s2);
	if (!file.exportNewContent()) return (1);
		
	return (0);

}
