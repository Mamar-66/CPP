/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 16:06:48 by omfelk            #+#    #+#             */
/*   Updated: 2024/08/30 16:53:00 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
	#define HARL_HPP

	#define RED     "\033[31m"
	#define ORANGE  "\033[38;5;208m"
	#define GREEN   "\033[32m"
	#define BLUE    "\033[34m"
	#define RESET   "\033[0m"
	#define BOLD    "\033[1m"
	#define UNDERLINE "\033[4m"

	#include <iostream>
	#include <sstream>
	
	class Harl
	{
		public :
			Harl(void);
			~Harl(void);

			void complain(std::string level);

		private:
			void	debug(void);
			void	info(void);
			void	warning(void);
			void	error(void);
	};

#endif