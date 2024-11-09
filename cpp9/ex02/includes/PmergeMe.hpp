/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:47:36 by omfelk            #+#    #+#             */
/*   Updated: 2024/11/09 11:16:31 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
	#define PMERGEME_HPP

	#include <vector>
	#include <deque>
	#include <iostream>
	#include <cstdlib>
	#include <algorithm>
	#include <ctime>
	#include <iomanip>

	#define RED     "\033[31m"
	#define ORANGE  "\033[38;5;208m"
	#define GREEN   "\033[32m"
	#define BLUE    "\033[34m"
	#define RESET   "\033[0m"
	#define BOLD    "\033[1m"
	#define UNDERLINE "\033[4m"

	class PmergeMe
	{
		private:
			PmergeMe();
			PmergeMe(const PmergeMe& other);
			~PmergeMe();

			PmergeMe& operator=(const PmergeMe& other);

		public:
		
	};

	void	with_vec(std::vector<unsigned int>& tab);
	void	with_deque(std::deque<unsigned int>& tab);
	void	affich(std::vector<unsigned int>& tab, const std::string& str);
	
#endif
