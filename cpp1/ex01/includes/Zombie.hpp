/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 13:02:54 by omfelk            #+#    #+#             */
/*   Updated: 2024/08/26 06:58:50 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
	#define ZOMBIE_HPP
	
	#include <iostream>
	#include <string>
	#include <sstream>

	#define RED     "\033[31m"
	#define ORANGE  "\033[38;5;208m"
	#define GREEN   "\033[32m"
	#define BLUE    "\033[34m"
	#define RESET   "\033[0m"
	#define BOLD    "\033[1m"
	#define UNDERLINE "\033[4m"

	class Zombie
	{
		public :

			// Constructor/Destructor

			Zombie(void);
			~Zombie();

			// Setters
			void	set_Name(std::string name);

			// Getters
			void	annonce(void);

		private :
			std::string	_name;
	};

	Zombie *zombieHorde(int N, std::string name);

#endif