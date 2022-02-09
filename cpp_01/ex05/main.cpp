/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:53:14 by acanterg          #+#    #+#             */
/*   Updated: 2022/02/09 12:43:42 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Karen.hpp"

int main()
{
	Karen karen20;

	karen20.complain("DEBUG");
	karen20.complain("INFO");
	karen20.complain("WARNING");
	karen20.complain("ERROR");

	karen20.complain("SOME OTHER COMPLAIN");

	return(0);
    
}
