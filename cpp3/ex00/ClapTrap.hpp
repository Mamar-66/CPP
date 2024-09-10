/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:34:21 by omfelk            #+#    #+#             */
/*   Updated: 2024/09/10 16:17:46 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
	#define CLAPTRAP_HPP

	#include <iostream>

	#define RED     "\033[31m"
	#define ORANGE  "\033[38;5;208m"
	#define GREEN   "\033[32m"
	#define BLUE    "\033[34m"
	#define RESET   "\033[0m"
	#define BOLD    "\033[1m"
	#define UNDERLINE "\033[4m"

	class ClapTrap
	{
		public :
			ClapTrap(void);
			ClapTrap(std::string name);
			ClapTrap(ClapTrap& claptrap);
			~ClapTrap(void);

			void	attack(const std::string& target);
			void	beRepaired(unsigned int amount);
			void	takeDamage(unsigned int amount);

		private:
			std::string _name;
			int _hit;
			int _energy;
			int _attack;
	};

#endif