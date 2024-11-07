/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:42:23 by omfelk            #+#    #+#             */
/*   Updated: 2024/11/07 15:20:18 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"

#include <sstream>

BitcoinExchange::BitcoinExchange()
{
	std::cout << ORANGE "Constructeur >> " RED << "default" << " << called" RESET << std::endl;
	_add_data();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other)
{
	std::cout << ORANGE "Constructeur >> " RED << "Copy" << " << called" RESET << std::endl;
	this->_data = other._data;
}

BitcoinExchange::~BitcoinExchange()
{
	std::cout << ORANGE "Destructor called" RESET << std::endl;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other)
{
	this->_data = other._data;

	return *this;
}

/*---------------------------------------------------------------*/
/*                         METHODE                               */
/*---------------------------------------------------------------*/

void	BitcoinExchange::_add_data()
{
	std::ifstream	data_file;
	std::string		tmp_line;
	std::string		date;
	float			value;

	data_file.open("data.csv");

	while (getline(data_file, tmp_line))
	{
		std::istringstream iss(tmp_line);

		if (std::getline(iss, date, ',') && iss >> value)
			this->_data[date] = value;
	}
}

bool	gest_date(std::istringstream& iline)
{
	std::string annee;
	getline(iline, annee, '-');
	int		annee_int = atoi(annee.c_str());


	std::string mois;
	getline(iline, mois, '-');
	int		mois_int = atoi(mois.c_str());

	std::string jour;
	getline(iline, jour);
	int		jour_int = atoi(jour.c_str());

	if (annee_int < 2009 || annee_int > 2022 || mois_int < 0 || mois_int > 12 || jour_int < 0 || jour_int > 31)
	{
		std::cout << RED "Error: bad input => "<< annee_int << "-"<< mois_int << "-" << jour_int << RESET << std::endl;
		return 0;
	}

	return 1;
}


bool	gest_val(std::string& val)
{
	float	multi;

	std::istringstream iss(val);
    iss >> multi;

	if (multi < 0)
	{
		std::cout << RED "Error: not a positive number." RESET << std::endl;
		return 0;
	}
	if (multi > 1000)
	{
		std::cout << RED "Error: too large a number." RESET << std::endl;
		return 0;
	}

	return true;
}

void	BitcoinExchange::changeVal()
{
	std::string line;

	getline(this->file_input, line);

	while(getline(this->file_input, line))
	{
		std::string			val;
		std::istringstream	date(line);
		std::istringstream	date_ft(line);

		getline(date, line, '|');
		getline(date, val);

		if (gest_date(date_ft) && gest_val(val))
		{
			std::cout << line << "=>" << val << " = " << std::endl;
		}

	}
}
