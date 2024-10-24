/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 21:11:44 by omfelk            #+#    #+#             */
/*   Updated: 2024/10/24 22:18:55 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/iter.hpp"


template<typename T>
void	printArg(const T& arg)
{
	std::cout << arg << std::endl;
}

template<typename T>
void	double_number(const T& arg)
{
	std::cout << arg * 2 << std::endl;
}

void	rev_string(const std::string& str)
{
	int i = str.length() - 1;

	for (; i >= 0; i--)
		std::cout << str[i];

	std::cout << std::endl;
	
}

int main()
{

	int tab_int[] = {1, 2, 3, 4};
	float tab_float[] = {1.1f, 2.2f, 3.3f, 4.4f};
	std::string  tab_string[] = {"text1", "text2", "text3", "text4"};

	::iter(tab_int, 4, printArg<int>);
	std::cout << std::endl;
	::iter(tab_int, 4, double_number<int>);
	std::cout << std::endl;
	::iter(tab_float, 4, double_number<float>);
	std::cout << std::endl;
	::iter(tab_string, 4, printArg<std::string>);
	::iter(tab_string, 4, rev_string);

	return 0;
}
