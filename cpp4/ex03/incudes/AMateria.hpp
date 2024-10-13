/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:37:19 by omfelk            #+#    #+#             */
/*   Updated: 2024/10/13 13:49:48 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
	#define AMATERIA_HPP

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

	class AMateria
	{
		protected:
			std::string	_type;

		public:
			AMateria();
			AMateria(const AMateria& amateria);
			AMateria(std::string const &type);

			virtual	~AMateria();

			AMateria& operator=(const AMateria& amateria);

			std::string const & getType() const; //Returns the materia type
			virtual AMateria* clone() const = 0;
			virtual void use(ICharacter& target);
	};

#endif