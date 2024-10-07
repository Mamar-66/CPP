/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 09:50:07 by omfelk            #+#    #+#             */
/*   Updated: 2024/10/05 13:15:02 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
	#define BRAIN_HPP

	#include <iostream>
	#include <cstdlib>
	#include <string>

	#define RED     "\033[31m"
	#define ORANGE  "\033[38;5;208m"
	#define GREEN   "\033[32m"
	#define BLUE    "\033[34m"
	#define RESET   "\033[0m"
	#define BOLD    "\033[1m"
	#define UNDERLINE "\033[4m"

	class	Brain
	{
		public :
			Brain(void);
			Brain(const Brain& brain);
			~Brain(void);

			Brain& operator=(const Brain& brain);

			const std::string&	getIdea(const int index) const;

		private :
			std::string	_ideas[100];

	};

#endif