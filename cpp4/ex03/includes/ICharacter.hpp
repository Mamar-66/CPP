/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:44:50 by omfelk            #+#    #+#             */
/*   Updated: 2024/10/14 12:03:52 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ICHARACTER_HPP
	#define	ICHARACTER_HPP

	#include <string>
	// #include "AMateria.hpp"
	class AMateria;

	class ICharacter
	{
		public:
			virtual ~ICharacter() {}
			virtual std::string const & getName() const = 0;
			virtual void equip(AMateria* m) = 0;
			virtual void unequip(int idx) = 0;
			virtual void use(int idx, ICharacter& target) = 0;
	};

#endif