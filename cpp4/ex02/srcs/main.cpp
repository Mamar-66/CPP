/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 09:28:40 by omfelk            #+#    #+#             */
/*   Updated: 2024/10/07 13:07:07 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
std::cout << std::string(30, '-') << std::endl;
	{
		const Animal *j = new Dog();
		const Animal* i = new Cat();
		Dog	basic;
		{
			Dog tmp = basic;
			
		}
		for (int i = 0; i < 100; i++)
			std::cout << BLUE "test basic : " RESET << basic.getBrain()->getIdea(i) << std::endl;
		delete j;//should not create a leak
		delete i;
	}
std::cout << std::string(30, '-') << std::endl;
	{
		const Animal	*tab_animal[10];

		for (int i = 0; i < 10; i++)
		{
			if (i % 2 == 0)
				tab_animal[i] = new Dog("tab_Dog");
			else
				tab_animal[i] = new Dog("tab_Cat");
		}
std::cout << std::string(30, '-') << std::endl;

		const	Dog	copy_dog(*(Dog *)tab_animal[2]);
		Dog assignement = *(Dog *)tab_animal[2];

		for (int i = 0; i < 100; i++)
		{
			std::cout << "original : " RED << ((Dog *)tab_animal[2])->getBrain()->getIdea(i) << RESET;
			std::cout << " copy : " ORANGE << copy_dog.getBrain()->getIdea(i) << RESET;
			std::cout << " assignement : " GREEN << assignement.getBrain()->getIdea(i) << RESET << std::endl;
		}
		for (int i = 0; i < 10; i++)
			delete tab_animal[i];
	}
std::cout << std::string(30, '-') << std::endl;
	return 0;
}
