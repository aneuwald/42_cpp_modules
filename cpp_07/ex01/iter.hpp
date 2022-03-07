/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 21:40:10 by acanterg          #+#    #+#             */
/*   Updated: 2022/03/07 09:13:36 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <class T>
void incrementElement (T &el) {
	el++;
}

template <class T>
void printGeneric (T const &el) {
	std::cout << el << std::endl;
}

template <class T, class U>
void iter(T arr[], int size, U func) {
	for (int i = 0; i < size; i++)
		func(arr[i]);
}

#endif