/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 09:34:47 by omfelk            #+#    #+#             */
/*   Updated: 2024/09/23 13:26:03 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
	#define ANIMAL_HPP	

	#include <iostream>
	#include <string>

	#define RED     "\033[31m"
	#define ORANGE  "\033[38;5;208m"
	#define GREEN   "\033[32m"
	#define BLUE    "\033[34m"
	#define RESET   "\033[0m"
	#define BOLD    "\033[1m"
	#define UNDERLINE "\033[4m"

	class	Animal
	{
		public :
			Animal(void);
			Animal(std::string type);
			Animal(const Animal& animal);
			virtual	~Animal(void);

			Animal& operator=(const Animal& animal);

			std::string		getType(void) const;

			virtual void	makeSound(void) const;

		protected :
			std::string	_type;
	};

#endif
