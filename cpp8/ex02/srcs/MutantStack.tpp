/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:32:33 by omfelk            #+#    #+#             */
/*   Updated: 2024/11/05 12:19:22 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_TPP
	#define MUTANTSTACK_TPP

	#include "../includes/MutantStack.hpp"

	template<typename T, typename Container>
	MutantStack<T ,Container>::MutantStack() : MutantStack<T, Container>::stack()
	{
		std::cout << ORANGE "Constructeur >> " RED << "default" << " << called" RESET << std::endl;
	}

	template<typename T, typename Container>
	MutantStack<T, Container>::MutantStack(const MutantStack<T, Container>& other) :
		MutantStack<T, Container>::stack(other)
	{
		std::cout << ORANGE "Constructeur >> " RED << "COPY" << " << called" RESET << std::endl;
	}

	template<typename T, typename Container>
	MutantStack<T, Container>::~MutantStack()
	{
		std::cout << ORANGE "Destructor called" RESET << std::endl;
	}

	template<typename T, typename Container>
	const MutantStack<T, Container>& MutantStack<T, Container>::operator=(const MutantStack<T, Container>& other)
	{
		if (this != &other)
			MutantStack<T, Container>::stack::operator=(other);

		return *this;
	}

	template<typename T, typename Container>
	typename MutantStack<T, Container>::iterator	MutantStack<T, Container>::begin()
	{
		return this->c.begin();
	}

	template<typename T, typename Container>
	typename MutantStack<T, Container>::iterator	MutantStack<T, Container>::end()
	{
		return this->c.end();
	}

#endif
