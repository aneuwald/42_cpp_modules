/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:57:11 by acanterg          #+#    #+#             */
/*   Updated: 2022/02/08 21:01:42 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "Contact.hpp"

# define MAX_CONTACTS 8

# define C_RED "\033[1;31m"
# define C_GREEN "\033[1;32m"
# define C_YELLOW "\033[1;33m"
# define C_END "\033[0m"

class PhoneBook {

private:
	Contact _contacts[MAX_CONTACTS];
	int		_size;

	void _printAll();


public:
	PhoneBook();
	~PhoneBook();
	
	void add();
	void search();

};

#endif