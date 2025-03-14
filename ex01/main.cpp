/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmodrzej <dmodrzej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 14:45:20 by dmodrzej          #+#    #+#             */
/*   Updated: 2025/03/14 13:52:01 by dmodrzej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	Span sp1 = Span(5);
	int arr[] = {6, 3, 17, 9, 11};
	size_t size = sizeof(arr) / sizeof(arr[0]);
	sp1.addRange(arr, arr + size);
    std::cout << sp1.shortestSpan() << std::endl;
    std::cout << sp1.longestSpan() << std::endl; 

    try
	{
        Span tooMany = Span(5);
		int arr2[] = {6, 3, 17, 9, 11, 42};
		size_t size2 = sizeof(arr2) / sizeof(arr2[0]);
		tooMany.addRange(arr2, arr2 + size2);
    }
	catch (std::exception &e)
	{
        std::cout << "Exception: " << e.what() << std::endl;
    }

	return 0;
}
