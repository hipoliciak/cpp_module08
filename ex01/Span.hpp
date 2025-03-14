/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmodrzej <dmodrzej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 14:45:31 by dmodrzej          #+#    #+#             */
/*   Updated: 2025/03/14 13:55:23 by dmodrzej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>
#include <algorithm>
#include <stdexcept>

class Span
{
	private:
		unsigned int _n;
		std::vector<int> _vec;
	
	public:
		Span(unsigned int n);
		Span(const Span &copy);
		~Span();

		Span &operator=(const Span &copy);

		void addNumber(int number);
		int shortestSpan();
		int longestSpan();
		
		template <typename Iterator>
		void addRange(Iterator begin, Iterator end);
};

template <typename Iterator>
void Span::addRange(Iterator begin, Iterator end)
{
	if (_vec.size() + std::distance(begin, end) > _n)
		throw std::out_of_range("Container is full");
	_vec.insert(_vec.end(), begin, end);
}
