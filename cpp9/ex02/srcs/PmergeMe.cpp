/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:48:15 by omfelk            #+#    #+#             */
/*   Updated: 2024/11/09 11:21:12 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PmergeMe.hpp"

PmergeMe::PmergeMe()
{
}

PmergeMe::PmergeMe(const PmergeMe& other)
{
	(void)other;
}

PmergeMe::~PmergeMe()
{
}

PmergeMe&	PmergeMe::operator=(const PmergeMe& other)
{
	(void)other;
	return *this;
}


/*------------------------------------------------------------------*/
/*                          FUNCTION                                */
/*------------------------------------------------------------------*/

void	affich(std::vector<unsigned int>& tab, const std::string& str)
{
	std::vector<unsigned int>::iterator	it = tab.begin();
	std::vector<unsigned int>::iterator	ite = tab.end();

	std::cout << str;

	for(; it != ite; it++)
		std::cout << " " << *it << " ";
	std::cout << std::endl;
}

void	affich(std::deque<unsigned int>& tab, const std::string& str)
{
	std::deque<unsigned int>::iterator	it = tab.begin();
	std::deque<unsigned int>::iterator	ite = tab.end();

	std::cout << str;

	for(; it != ite; it++)
		std::cout << " " << *it << " ";
	std::cout << std::endl;
}

void insertInOrder(std::vector<unsigned int>& tab, int elem)
{
	std::vector<unsigned int>::iterator	pos = std::lower_bound(tab.begin(), tab.end(), elem);
	tab.insert(pos, elem);
}

void insertInOrder(std::deque<unsigned int>& tab, int elem)
{
	std::deque<unsigned int>::iterator	pos = std::lower_bound(tab.begin(), tab.end(), elem);
	tab.insert(pos, elem);
}

void	with_vec(std::vector<unsigned int>& tab)
{
	std::clock_t	start = std::clock();

	std::vector<std::pair<int, int> >	pair;
	for(size_t i = 0; i + 1 < tab.size(); i += 2)
	{
		if (tab[i] > tab[i + 1])
			pair.push_back(std::make_pair(tab[i + 1], tab[i]));
		else
			pair.push_back(std::make_pair(tab[i], tab[i + 1]));
	}

	if (tab.size() % 2 != 0)
		pair.push_back(std::make_pair(tab.back(), tab.back()));

	std::vector<unsigned int>	sortList;
	sortList.push_back(pair[0].first);
	sortList.push_back(pair[0].second);

	for(size_t i = 1; i < pair.size(); i++)
	{
		insertInOrder(sortList, pair[i].first);
		insertInOrder(sortList, pair[i].second);
	}
	std::clock_t	end = std::clock();

	affich(sortList, "After :");
	double time = (double)(end - start) / CLOCKS_PER_SEC;
	std::cout << "Time to process a range of " << tab.size() << " elements with std::vector : ";
	std::cout << std::fixed << std::setprecision(6) << time << " sec" << std::endl;
}

void	with_deque(std::deque<unsigned int>& tab)
{
	std::clock_t	start = std::clock();

	std::deque<std::pair<int, int> >	pair;
	for(size_t i = 0; i + 1 < tab.size(); i += 2)
	{
		if (tab[i] > tab[i + 1])
			pair.push_back(std::make_pair(tab[i + 1], tab[i]));
		else
			pair.push_back(std::make_pair(tab[i], tab[i + 1]));
	}

	if (tab.size() % 2 != 0)
		pair.push_back(std::make_pair(tab.back(), tab.back()));

	std::deque<unsigned int>	sortList;
	sortList.push_back(pair[0].first);
	sortList.push_back(pair[0].second);

	for(size_t i = 1; i < pair.size(); i++)
	{
		insertInOrder(sortList, pair[i].first);
		insertInOrder(sortList, pair[i].second);
	}
	std::clock_t	end = std::clock();

	affich(sortList, "After :");
	double time = (double)(end - start) / CLOCKS_PER_SEC;
	std::cout << "Time to process a range of " << tab.size() << " elements with std::deque : ";
	std::cout << std::fixed << std::setprecision(6) << time << " sec" << std::endl;
}
