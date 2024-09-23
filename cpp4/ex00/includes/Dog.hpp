/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:54:13 by omfelk            #+#    #+#             */
/*   Updated: 2024/09/23 13:06:20 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
	#define DOG_HPP

	#include "Animal.hpp"

	class	Dog : public Animal
	{
		public :
			Dog(void);
			Dog(std::string type);
			Dog(const Dog& dog);
			~Dog(void);

			Dog&	operator=(const Dog& dog);

			void	makeSound(void) const;
	};

#endif