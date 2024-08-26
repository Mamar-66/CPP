/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 07:09:05 by omfelk            #+#    #+#             */
/*   Updated: 2024/08/26 08:04:33 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define RED     "\033[31m"
#define ORANGE  "\033[38;5;208m"
#define GREEN   "\033[32m"
#define BLUE    "\033[34m"
#define RESET   "\033[0m"
#define BOLD    "\033[1m"
#define UNDERLINE "\033[4m"

#include <iostream>

int	main()
{
	std::string str("HI THIS IS BRAIN");
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << GREEN "Memory address str     : " RESET << &str;
	std::cout << GREEN " Value : " RESET << str << std::endl;

	std::cout << GREEN "Memory address str_REF : " RESET << &stringREF;
	std::cout << GREEN " Value : " RESET << stringREF << std::endl;

	std::cout << GREEN "Memory address str_PTR : " RESET << stringPTR;
	std::cout << GREEN " Value : " RESET << *stringPTR << std::endl;

	return 0;
}
