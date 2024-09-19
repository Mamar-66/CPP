/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 09:46:25 by omfelk            #+#    #+#             */
/*   Updated: 2024/09/19 12:20:56 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
	#define DIAMONDTRAP_HPP

	#include "FragTrap.hpp"
	#include "ScavTrap.hpp"

	class DiamondTrap : public ScavTrap, public FragTrap
	{
		public :
			DiamondTrap(void);
			DiamondTrap(std::string name);
			DiamondTrap(const DiamondTrap& diamondTrap);
			~DiamondTrap(void);

			DiamondTrap &operator=(const DiamondTrap& diamondTrap);

			void	wohAml(void);
			void	attack(const std::string &string);

		private :
			std::string	_name;
	};

#endif