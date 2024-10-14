/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 09:43:16 by omfelk            #+#    #+#             */
/*   Updated: 2024/10/14 10:26:07 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
	#define CHARACTER_HPP

	#include <string>
	#include <iostream>
	#include "ICharacter.hpp"

	#define RED     "\033[31m"
	#define ORANGE  "\033[38;5;208m"
	#define GREEN   "\033[32m"
	#define BLUE    "\033[34m"
	#define RESET   "\033[0m"
	#define BOLD    "\033[1m"
	#define UNDERLINE "\033[4m"

	class Character : public ICharacter
	{
		private :
			AMateria*	_materia[4];
			std::string	_name;

		public :
			Character();
			Character(const std::string name);
			Character(const Character& character);
			~Character();

			Character& operator=(const Character& character);

			std::string const &getName() const;
			void equip(AMateria* m);
			void unequip(int idx);
			void use(int idx, ICharacter& target);
	};

#endif