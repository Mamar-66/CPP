/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 08:50:13 by omfelk            #+#    #+#             */
/*   Updated: 2024/11/08 11:11:03 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RPN.hpp"

void	calcul(std::stack<int>& st, int sign)
{
	if (st.size() < 2)
		throw std::runtime_error(RED "erro argm" RESET);
	int tmp;
	int result;

	tmp = st.top();
	st.pop();

	switch (sign)
	{
		case '-' :
			result = st.top() - tmp ;
			break;
		case '+' :
			result = st.top() + tmp ;
			break;
		case '*' :
			result = st.top() * tmp ;
			break;
		case '/' :
			result = st.top() / tmp ;
			break;
	}

	st.pop();
	st.push(result);
}

void	algo(char **argv)
{
	std::stack<int>	st;

	int i = 0;

	while(argv[1][i])
	{
		while (argv[1][i] == ' ')
			i++;

		if (!std::isdigit(argv[1][i]) && SIGN(argv[1][i]) == 0)
			throw std::runtime_error(RED "error caracter not autorized");

		if (std::isdigit(argv[1][i]))
			st.push((argv[1][i] - '0'));

		if (SIGN(argv[1][i]))
		{
			try
			{
				calcul(st, argv[1][i]);
			}
			catch(const std::exception& e)
			{
				throw;
			}
		}
		i++;
	}
	std::cout << st.top() << std::endl;
}
