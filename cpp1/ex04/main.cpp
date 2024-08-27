/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 08:28:04 by omfelk            #+#    #+#             */
/*   Updated: 2024/08/27 17:23:02 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define RED     "\033[31m"
#define ORANGE  "\033[38;5;208m"
#define GREEN   "\033[32m"
#define BLUE    "\033[34m"
#define RESET   "\033[0m"
#define BOLD    "\033[1m"
#define UNDERLINE "\033[4m"

#include <iostream>
#include <fstream>
#include <string>

using std::cout;
using std::endl;

void	replace(char **argv, std::ifstream &filename_input)
{
	std::string	filename(argv[1]);
	std::string	str1(argv[2]);
	std::string	str2(argv[3]);

	std::ofstream result(filename.append(".resul").data());
	while (result.good() && filename_input.good())
	{
		std::string line_input;
		size_t		pose_str1;

		std::getline(filename_input, line_input);
		pose_str1 = line_input.find(str1, 0);
		while (pose_str1 != std::string::npos)
		{
			line_input.erase(pose_str1, str1.length());
			line_input.insert(pose_str1, str2);
			pose_str1 = line_input.find(str1, pose_str1);
		}
		
		result << line_input;

		if (filename_input.eof())
			break;

		result << std::endl;
	}
	result.close();
}

void	prog(char **argv)
{
	std::ifstream filename(argv[1]);

	if (filename.good())
	{
		if (filename.peek() == std::ifstream::traits_type::eof())
			cout << RED "error file is empty" RESET << endl;
		else
			replace(argv, filename);
	}
	else
		cout << RED  "File open error, may be the file does not exist or access is not authorized." RESET << endl;

	filename.close();
}

int main(int argc, char **argv)
{
	if (argc == 4)
		prog(argv);
	else
	{
		cout << RED "Error argument" RESET << endl;
		cout << GREEN "<filname> <str1> <str2>"  RESET << endl;
	}
	return 0;
}

