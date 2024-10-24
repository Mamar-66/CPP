/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 09:58:53 by omfelk            #+#    #+#             */
/*   Updated: 2024/10/24 12:15:08 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/Serializer.hpp"
#include "../includes/Data.hpp"

int main()
{

	Data *			ptr_data = new Data;
	uintptr_t		ptr;

	std::cout << "ptr_data  : " << ptr_data << std::endl;
	std::cout << "ptr_data     : " << reinterpret_cast<uintptr_t>(ptr_data) << std::endl;

	ptr = Serializer::serialize(ptr_data);

	std::cout << "serialize ptr :" << ptr << std::endl;

	ptr_data = Serializer::deserialize(ptr);

	std::cout << "deserialize ptr_data : " << ptr_data << std::endl;

	std::cout << ptr_data->getName() << std::endl;

	delete ptr_data;

	return 0;
}
