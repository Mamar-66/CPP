/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 09:28:40 by omfelk            #+#    #+#             */
/*   Updated: 2024/10/03 09:33:31 by omfelk           ###   ########.fr       */
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
		const WrongCat *k = new WrongCat("wrong_cat");

		std::cout << RED "						TEST WITH WRONG" RESET << std::endl;

		std::cout << meta->getType() << " " << std::endl;
		std::cout << j->getType() << " " << std::endl;
		std::cout << k->getType() << " " << std::endl;

		meta->makeSound();
		j->makeSound();
		k->makeSound();

		delete j;
		delete meta;
		delete k;

		std::cout << std::endl << std::string(40, '-') << std::string("\n") << std::endl;
	}

	return 0;
}
