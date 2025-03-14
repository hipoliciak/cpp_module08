/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmodrzej <dmodrzej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 14:45:39 by dmodrzej          #+#    #+#             */
/*   Updated: 2025/03/14 13:55:15 by dmodrzej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n) : _n(n)
{
}

Span::Span(const Span &copy)
{
	*this = copy;
}

Span::~Span()
{
}

Span &Span::operator=(const Span &copy)
{
	if (this == &copy)
		return *this;
	_n = copy._n;
	_vec = copy._vec;
	return *this;
}

void Span::addNumber(int number)
{
	if (_vec.size() >= _n)
		throw std::out_of_range("Container is full");
	_vec.push_back(number);
}

int Span::shortestSpan()
{
	if (_vec.size() <= 1)
		throw std::out_of_range("Not enough elements");
	std::vector<int> sorted = _vec;
	std::sort(sorted.begin(), sorted.end());
	int min = sorted[1] - sorted[0];
	for (size_t i = 1; i < sorted.size() - 1; i++)
	{
		if (sorted[i + 1] - sorted[i] < min)
			min = sorted[i + 1] - sorted[i];
	}
	return min;
}

int Span::longestSpan()
{
	if (_vec.size() <= 1)
		throw std::out_of_range("Not enough elements");
	std::vector<int> sorted = _vec;
	std::sort(sorted.begin(), sorted.end());
	return sorted[sorted.size() - 1] - sorted[0];
}
