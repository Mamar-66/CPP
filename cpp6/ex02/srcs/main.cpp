/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:23:48 by omfelk            #+#    #+#             */
/*   Updated: 2024/10/24 13:17:19 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Base.hpp"
#include "../includes/A.hpp"
#include "../includes/B.hpp"
#include "../includes/C.hpp"
#include <ctime>
#include <cstdlib>

Base* generate(void)
{
	Base*	result;
	srand(static_cast<unsigned int>(time(0)));

	int random = (rand() % 3);
	
	switch (random)
	{
		case 0 :
			result = new A;
			break;
		case 1 :
			result = new B;
			break;
		case 2 :
			result = new C;
			break;
	}

	return result;

}

void identify(Base* p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "the pointer is a A type" << std::endl;
	if (dynamic_cast<B *>(p))
		std::cout << "the pointer is a B type" << std::endl;
	if (dynamic_cast<C *>(p))
		std::cout << "the pointer is a C type" << std::endl;
}

void identify(Base& p)
{
	try
	{
		A& a = dynamic_cast<A &>(p);

		(void)a;

		std::cout << "the pointer is a A type" << std::endl;
	}
	catch(const std::exception& e) {};
	try
	{
		B& b = dynamic_cast<B &>(p);

		(void)b;

		std::cout << "the pointer is a B type" << std::endl;
	}
	catch(const std::exception& e) {};
	try
	{
		C& c = dynamic_cast<C &>(p);

		(void)c;

		std::cout << "the pointer is a C type" << std::endl;
	}
	catch(const std::exception& e) {};
}

int	main()
{

	Base* tmp = generate();

	identify(*tmp);
	identify(tmp);

	delete tmp;

	return 0;
}