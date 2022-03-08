/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 17:47:21 by acanterg          #+#    #+#             */
/*   Updated: 2022/03/08 09:49:40 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_HPP
# define FILE_HPP

# include <iostream>
# include <fstream>
# include <sstream>
# include <string>

#define C_RED "\033[1;31m"
#define C_GREEN "\033[1;32m"
#define C_YELLOW "\033[1;33m"
#define C_END "\033[0m"

class File {

private:
	std::string _filename;
	std::string _content;
	std::string _newContent;
	
public:
	File();
	~File();

	bool openFile(std::string filename);
	void replaceContent(std::string s1, std::string s2, std::size_t start = 0);
	void printOriginal();
	void printNewContent();
	bool exportNewContent();
};

#endif