/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 08:33:00 by omfelk            #+#    #+#             */
/*   Updated: 2024/10/28 11:40:27 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
	#define ARRAY_TPP

	#include "Array.hpp"

	template<typename T>
	Array<T>::Array() : _tab(new T[0]()), _size(0)
	{
		std::cout << ORANGE "Constructeur >> " RED << " Default size(" << _size << ")" << " << called" RESET << std::endl;
	}

	template<typename T>
	Array<T>::Array(const unsigned int& size) : _tab(new T[size]()), _size(size)
	{
		std::cout << ORANGE "Constructeur >> " RED << "init size(" << _size << ")" << " << called" RESET << std::endl;
	}

	template<typename T>
	Array<T>::Array(const Array& other) : _tab(new T[other._size]()), _size(other._size)
	{
		std::cout << ORANGE "Constructeur >> " RED << " Copy size(" << _size << ")" << " << called" RESET << std::endl;
	}

	template<typename T>
	Array<T>::~Array()
	{
		delete[] this->_tab;
		std::cout << ORANGE "Destructor >> " RED << " Array size(" << _size << ")" << " << called" RESET << std::endl;
	}

	template<typename T>
	Array<T>& Array<T>::operator=(const Array<T>& other)
	{
		if (this != &other)
		{
			delete[] this->_tab;
			this->_tab = new T[other._size];
			this->_size = other._size;
			for  (int i = 0; i < this->_size; i++)
				this->_tab[i] = other._tab[i];
		}

		return *this;
	}

	template<typename T>
	T	Array<T>::operator[](int i) const
	{
		T	instance;

		if (i > this->_size - 1 || i < 0)
			throw Array::OVERFLOWTAB();
		
		instance = this->_tab[i];

		return instance;
	}

	template<typename T>
	T&	Array<T>::operator[](int i)
	{
		if (i > this->_size - 1 || i < 0)
			throw Array::OVERFLOWTAB();
		
		return this->_tab[i];
	}

	template<typename T>
	const char* Array<T>::OVERFLOWTAB::what() const throw()
	{
		return (RED "index is out of bounds" RESET);
	}

	template<typename T>
	int	Array<T>::size() const
	{
		return this->_size;
	}

#endif