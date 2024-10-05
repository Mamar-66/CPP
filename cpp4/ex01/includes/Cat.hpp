/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:15:13 by omfelk            #+#    #+#             */
/*   Updated: 2024/10/05 13:10:16 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
	#define CAT_HPP

	#include "Animal.hpp"
	#include "Brain.hpp"

	class	Cat : public Animal
	{
		public :
			Cat(void);
			Cat(std::string type);
			Cat(const Cat& cat);
			~Cat(void);

			Cat&	operator=(const Cat& cat);

			Brain*	getBrain(void) const;

			void	makeSound(void) const;

		private :
			Brain*	_brain;
	};

#endif