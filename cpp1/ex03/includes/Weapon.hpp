/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 12:31:37 by omfelk            #+#    #+#             */
/*   Updated: 2024/08/26 13:56:50 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
	#define WEAPON_HPP

	#define RED     "\033[31m"
	#define ORANGE  "\033[38;5;208m"
	#define GREEN   "\033[32m"
	#define BLUE    "\033[34m"
	#define RESET   "\033[0m"
	#define BOLD    "\033[1m"
	#define UNDERLINE "\033[4m"

	#include <iostream>

	class	Weapon
	{
		public :
			Weapon(std::string weapontype);
			~Weapon();

			std::string	const	&getType(void);

			void				setType(std::string	weaponType);
			
		private:
			std::string	_weaponType;
	};

#endif