/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 13:27:24 by omfelk            #+#    #+#             */
/*   Updated: 2024/08/26 14:14:17 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
	#define HUMANA_HPP

	#include "../includes/Weapon.hpp"

	class	HumanA
	{
		public :
			HumanA(std::string name, Weapon &weapon);
			~HumanA(void);

			void	attack(void);

		private:
			std::string	_name;
			Weapon&		_weapon;
	};

#endif