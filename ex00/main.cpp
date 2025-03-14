/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmodrzej <dmodrzej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 14:44:14 by dmodrzej          #+#    #+#             */
/*   Updated: 2025/03/14 13:37:25 by dmodrzej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int main(void)
{
	std::vector<int> vec;
	for (int i = 0; i < 10; i++)
		vec.push_back(i);
	try
	{
		std::cout << easyfind(vec, 5) << std::endl;
		std::cout << easyfind(vec, 10) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::list<int> lst;
	for (int i = 0; i < 10; i++)
		lst.push_back(i);
	try
	{
		std::cout << easyfind(lst, 3) << std::endl;
		std::cout << easyfind(lst, 12) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
