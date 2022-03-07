/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 21:40:10 by acanterg          #+#    #+#             */
/*   Updated: 2022/03/06 21:47:21 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATES_HPP
# define TEMPLATES_HPP

template <class T>
void swap(T &a, T &b) {
	T hold;

	hold = a;
	a = b;
	b = hold;
}

template <class T>
T min(T &a, T &b) {
	if (a < b)
		return (a);
	return (b);
}

template <class T>
T max(T &a, T &b) {
	if (a > b)
		return (a);
	return (b);
}

#endif