/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 10:00:35 by omfelk            #+#    #+#             */
/*   Updated: 2024/10/13 16:05:15 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ICE_HPP
	#define	ICE_HPP

	#include "AMateria.hpp"

	class Ice : public AMateria 
	{
		public :
			Ice();
			Ice(const Ice& ice);

			~Ice();

			Ice &operator=(const Ice& ice);
	};

#endif