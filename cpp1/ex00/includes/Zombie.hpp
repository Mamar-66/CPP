/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 09:12:53 by omfelk            #+#    #+#             */
/*   Updated: 2024/08/24 12:51:46 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
	# define ZOMBIE_HPP

	#include <iostream>
	#include <string>

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
			Zombie(std::string name);
			~Zombie();

			void annonce(void);

		private :
			std::string	_name;
	};

	Zombie	*newZombie(std::string name);
	void	randomChump(std::string name);
#endif