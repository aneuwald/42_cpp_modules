/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 17:47:21 by acanterg          #+#    #+#             */
/*   Updated: 2022/03/08 10:14:10 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>

# define C_RED "\033[1;31m"
# define C_GREEN "\033[1;32m"
# define C_YELLOW "\033[1;33m"
# define C_BLUE "\033[1;34m"
# define C_MAGENTA "\033[1;35m"
# define C_CYAN "\033[1;36m"
# define C_END "\033[0m"

# define MAX_OPTIONS 4

enum t_message {
	DEBUG,
	INFO,
	WARNING,
	ERROR
};

class Karen {

private:
	void debug();
	void info();
	void warning();
	void error();
	
public:
	Karen();
	~Karen();

	void complain(std::string level);
};

#endif