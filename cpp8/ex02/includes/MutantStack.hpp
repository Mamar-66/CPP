/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:32:43 by omfelk            #+#    #+#             */
/*   Updated: 2024/11/05 12:18:51 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
	#define MUTANTSTACK_HPP

	#include <iostream>
	#include <stack>

	#define RED     "\033[31m"
	#define ORANGE  "\033[38;5;208m"
	#define GREEN   "\033[32m"
	#define BLUE    "\033[34m"
	#define RESET   "\033[0m"
	#define BOLD    "\033[1m"
	#define UNDERLINE "\033[4m"

	template<typename T, typename Container = std::deque<T> >
	class	MutantStack : public std::stack<T, Container> 
	{
		public :
			typedef typename Container::iterator	iterator;

			MutantStack();
			MutantStack(const MutantStack<T, Container>& other);
			~MutantStack();
	
			const MutantStack<T, Container>& operator=(const MutantStack<T, Container>& other);

			iterator begin();
			iterator end();
	};


	#include "../srcs/MutantStack.tpp"

#endif