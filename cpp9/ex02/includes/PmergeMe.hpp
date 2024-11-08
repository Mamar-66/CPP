/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:47:36 by omfelk            #+#    #+#             */
/*   Updated: 2024/11/08 16:31:59 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
	#define PMERGEME_HPP

	#include <iostream>
	#include <vector>
	#include <cstdlib>

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

	// void	fordJohnson(std::vector<unsigned int>& tab);
	
#endif
