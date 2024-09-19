/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 14:09:23 by omfelk            #+#    #+#             */
/*   Updated: 2024/09/19 10:36:19 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
	#define FRAGTRAP_HPP

	#include "ClapTrap.hpp"

	class FragTrap : virtual public ClapTrap
	{
		public :
			FragTrap(void);
			FragTrap(std::string name);
			FragTrap(const FragTrap& fragTrap);
			~FragTrap(void);

			FragTrap	&operator=(const FragTrap &flagTrap);

			void		highFivesGuys(void);
	};

#endif