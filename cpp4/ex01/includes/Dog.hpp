/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:54:13 by omfelk            #+#    #+#             */
/*   Updated: 2024/10/05 13:10:42 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
	#define DOG_HPP

	#include "Animal.hpp"
	#include "Brain.hpp"

	class	Dog : public Animal
	{
		public :
			Dog(void);
			Dog(std::string type);
			Dog(const Dog& dog);
			~Dog(void);

			Dog&	operator=(const Dog& dog);

			Brain*	getBrain(void) const;

			void	makeSound(void) const;

		private :
			Brain	*_brain;
	};

#endif