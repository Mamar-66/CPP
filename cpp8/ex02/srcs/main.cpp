/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:32:25 by omfelk            #+#    #+#             */
/*   Updated: 2024/11/05 16:07:14 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MutantStack.hpp"
#include <list>


int main()
{
	{
		MutantStack<int>	mstack;
		std::list<int>		test;

		mstack.push(5);
		mstack.push(17);

		test.push_back(5);
		test.push_back(17);

		std::cout << mstack.top() << " : ";
		std::cout << test.back() << std::endl;

		mstack.pop();
		test.pop_back();


		std::cout << mstack.size() << " : ";
		std::cout << test.size() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);

		test.push_back(3);
		test.push_back(5);
		test.push_back(737);
		test.push_back(0);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		std::list<int>::iterator it_test = test.begin();
		std::list<int>::iterator ite_test = test.end();

		++it;
		++it_test;
		--it;
		--it_test;

		while (it != ite && it_test != ite_test)
		{
			std::cout << *it << " : ";
			std::cout << *it_test << std::endl;
			++it;
			++it_test;
		}
	}
}