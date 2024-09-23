/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:15:13 by omfelk            #+#    #+#             */
/*   Updated: 2024/09/23 13:41:55 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
	#define CAT_HPP

	#include "Animal.hpp"

	class	Cat : public Animal
	{
		public :
			Cat(void);
			Cat(std::string type);
			Cat(const Cat& cat);
			~Cat(void);

			Cat&	operator=(const Cat& cat);

			void	makeSound(void) const;
	};

#endif