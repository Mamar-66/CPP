/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:32:26 by omfelk            #+#    #+#             */
/*   Updated: 2024/11/07 14:06:41 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"

void	check_input(std::ifstream& file, int argc, char **argv)
{
	unsigned int	storyteller = 0;
	std::string		tmp_str;
	std::ifstream	tmp_file;

	if (argc != 2)
		throw std::runtime_error(RED "error input exemple" GREEN "[ .btc 'file'.csv ]" RESET);

	file.open(argv[1]);
	if (!file)
		throw std::runtime_error(RED "error can't open " ORANGE + std::string(argv[1]));
	
	tmp_file.open(argv[1]);
	while(getline(tmp_file, tmp_str))
	{
		if ( storyteller == 0 && tmp_str != "date | value")
			throw std::runtime_error(RED "error first line " ORANGE "'date | value'");

		if (tmp_str.empty())
			throw std::runtime_error(RED "error the file has empty line" RESET);
		storyteller++;
	}

	if (!storyteller)
		throw std::runtime_error(RED "error fille is empty" RESET);

	tmp_file.close();
}

int main(int argc, char **argv)
{
	BitcoinExchange	bt;

	try
	{
		check_input(bt.file_input, argc, argv);
		bt.changeVal();
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
		return 1;
	}

	return 0;
}
