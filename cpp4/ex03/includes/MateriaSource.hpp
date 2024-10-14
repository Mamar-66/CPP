/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 10:56:24 by omfelk            #+#    #+#             */
/*   Updated: 2024/10/14 11:59:59 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
	#define MATERIASOURCE_HPP

	#include "IMateriaSource.hpp"

	class MateriaSource : public IMateriaSource
	{
		private:
			AMateria* _materiaTab[4];

		public :
			MateriaSource();
			MateriaSource(const MateriaSource& materiasource);
			~MateriaSource();

			MateriaSource& operator=(const MateriaSource& materiasource);

			void learnMateria(AMateria*);
			AMateria* createMateria(std::string const & type);
	};


#endif