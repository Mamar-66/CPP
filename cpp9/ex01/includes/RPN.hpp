/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 08:50:01 by omfelk            #+#    #+#             */
/*   Updated: 2024/11/08 10:57:10 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
	#define RPN_HPP

	#include <iostream>
	#include <stack>

	#define RED     "\033[31m"
	#define ORANGE  "\033[38;5;208m"
	#define GREEN   "\033[32m"
	#define BLUE    "\033[34m"
	#define RESET   "\033[0m"
	#define BOLD    "\033[1m"
	#define UNDERLINE "\033[4m"

	#define SIGN(c) ((c) == '+' || (c) == '-' || (c) == '*' || (c) == '/')

	void	algo(char **argv);

#endif