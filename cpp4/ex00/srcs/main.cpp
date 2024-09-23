/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 09:28:40 by omfelk            #+#    #+#             */
/*   Updated: 2024/09/23 15:36:24 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	std::cout << std::endl << std::string(40, '-') << std::string("\n") << std::endl;
	{
		const Animal *meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << RED "						TEST ORIGINAL" RESET << std::endl;

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;

		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();

		delete j;
		delete meta;
		delete i;

		std::cout << std::endl << std::string(40, '-') << std::string("\n") << std::endl;
	}
	{
		const WrongAnimal *meta = new WrongAnimal("cat_for_animal");
		const WrongAnimal *j = new WrongCat("cat_for_cat");

		std::cout << RED "						TEST WITH WRONG" RESET << std::endl;

		std::cout << meta->getType() << " " << std::endl;
		std::cout << j->getType() << " " << std::endl;

		meta->makeSound();
		j->makeSound();

		delete j;
		delete meta;

		std::cout << std::endl << std::string(40, '-') << std::string("\n") << std::endl;
	}

	return 0;
}
