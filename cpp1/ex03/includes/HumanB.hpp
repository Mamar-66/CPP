/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 14:15:53 by omfelk            #+#    #+#             */
/*   Updated: 2024/08/26 14:58:20 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
	#define HUMANB_HPP

	#include "../includes/Weapon.hpp"

	class HumanB
	{
		public :
			HumanB(std::string name);
			~HumanB(void);

			void	setWeapon(Weapon &weapon);

			void	attack(void) const;

		private :
			std::string	_name;
			Weapon		*_weapon;
	};

#endif