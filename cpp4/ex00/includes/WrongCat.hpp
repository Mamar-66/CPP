/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:08:00 by omfelk            #+#    #+#             */
/*   Updated: 2024/09/23 14:26:22 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
	#define WRONGCAT_HPP

	#include "WrongAnimal.hpp"

	class	WrongCat : public WrongAnimal
	{
		public :
			WrongCat(void);
			WrongCat(std::string type);
			WrongCat(const WrongCat& wrongCat);
			~WrongCat(void);

			WrongCat&	operator=(const WrongCat& wrongCat);

			void	makeSound(void) const;
	};

#endif