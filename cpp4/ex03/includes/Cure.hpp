/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 10:04:52 by omfelk            #+#    #+#             */
/*   Updated: 2024/10/14 09:17:49 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CURE_HPP
	#define	CURE_HPP

	#include "AMateria.hpp"

	class Cure : public AMateria
	{
		public :
			Cure();
			Cure(const Cure& cure);
			~Cure();

			Cure& operator=(const Cure& cure);

			AMateria* clone() const;
			void use(ICharacter& target);
	};

#endif