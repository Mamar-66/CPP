/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:55:21 by omfelk            #+#    #+#             */
/*   Updated: 2024/10/10 15:56:38 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
	#define IMATERIASOURCE_HPP

	#include <string>

	class IMateriaSource
	{
		public:
			virtual ~IMateriaSource() {}
			virtual void learnMateria(AMateria*) = 0;
			virtual AMateria* createMateria(std::string const & type) = 0;
	};

#endif