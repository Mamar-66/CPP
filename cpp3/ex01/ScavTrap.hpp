/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 08:10:42 by omfelk            #+#    #+#             */
/*   Updated: 2024/09/12 13:00:22 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRAVTRAP_HPP
	#define STRAVTRAP_HPP

	#include "ClapTrap.hpp"

	class ScavTrap : public ClapTrap
	{
		public :
			ScavTrap(void);
			ScavTrap(std::string name);
			~ScavTrap();

			void	attack(const std::string& target);
			void	guardGate(void);
	};

#endif