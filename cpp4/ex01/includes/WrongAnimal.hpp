/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:37:40 by omfelk            #+#    #+#             */
/*   Updated: 2024/09/23 15:38:51 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
	#define WRONGANIMAL_HPP	

	#include <iostream>
	#include <string>

	#define RED     "\033[31m"
	#define ORANGE  "\033[38;5;208m"
	#define GREEN   "\033[32m"
	#define BLUE    "\033[34m"
	#define RESET   "\033[0m"
	#define BOLD    "\033[1m"
	#define UNDERLINE "\033[4m"

	class	WrongAnimal
	{
		public :
			WrongAnimal(void);
			WrongAnimal(std::string type);
			WrongAnimal(const WrongAnimal& wrongAnimal);
			virtual	~WrongAnimal(void);

			WrongAnimal& operator=(const WrongAnimal& wrongAnimal);

			std::string		getType(void) const;

			void	makeSound(void) const;

		protected :
			std::string		_type;
	};

#endif