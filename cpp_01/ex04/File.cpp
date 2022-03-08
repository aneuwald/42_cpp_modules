/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 17:48:32 by acanterg          #+#    #+#             */
/*   Updated: 2022/03/08 09:49:46 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

File::File() {
	return ;
}

File::~File() {
	return ;
}

bool File::openFile(std::string  filename) {
	_filename = filename;
	std::ifstream ifs;
	std::stringstream buffer;

	ifs.open(_filename.c_str(), std::ios::in);

	if (!ifs.is_open()) {
		std::cout << C_RED << "Error on opening the file: " << filename << C_END << std::endl;
		return (false);
	}

	buffer << ifs.rdbuf();
	_content = buffer.str();
	_newContent = _content;
	ifs.close();
	return (true);

}

bool File::exportNewContent() {
	std::ofstream ofs;
	std::string newOut = _filename + ".replace";

	ofs.open(newOut.c_str(), std::ios::out);
	if (!ofs.is_open()) {
		std::cout << C_RED  << "Error on creating new file " << newOut << C_END << std::endl;
		return (false);
	}

	ofs << _newContent;
	ofs.close();
	return (true);
}

void File::replaceContent(std::string s1, std::string s2, std::size_t start) {
	std::size_t next = _newContent.find(s1, start);
	std::string temp;

	if (next == std::string::npos)
		return ;

	temp = _newContent.substr(next + s1.length(), _newContent.length() - next + s1.length());
	_newContent = _newContent.substr(0, next);
	_newContent += s2;
	_newContent += temp;

	replaceContent(s1, s2, next + s2.length());
}

void File::printOriginal() {
	std::cout << _content << std::endl;
}

void File::printNewContent() {
	std::cout << _newContent << std::endl;
}