/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 18:36:07 by smorty            #+#    #+#             */
/*   Updated: 2019/11/11 20:12:54 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

static int	pick_mode()
{
	std::string choice;

	while (1)
	{
		std::cout << "Please, choose one: ADD, SEARCH, or EXIT: ";
		std::cin >> choice;
		if (!choice.compare("ADD"))
			return (BOOK_ADD);
		if (!choice.compare("SEARCH"))
			return (BOOK_SEARCH);
		if (!choice.compare("EXIT"))
			return (BOOK_EXIT);
	}
	return (0);
}

static void	add_contact(Contact *book, int *contacts)
{
	if (*contacts > 7)
		std::cout << "The phonebook is full." << std::endl;
	else
		book[(*contacts)].fill_info((*contacts)++);
}

static void	search_contact(Contact *book, int contacts)
{
	if (!contacts)
		std::cout << "The phonebook is empty." << std::endl;
	else
	{
		for (int i = 0; i < contacts; ++i)
			book[i].print_less();
		int choice;
		while (1)
		{
			std::cout << "Pick a contact: ";
			std::cin >> choice;
			if (std::cin.fail())
			{
				std::cout << "Not a number." << std::endl;
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			}
			else if (choice >= 0 && choice < contacts)
			{
				book[choice].print();
				return ;
			}
			else
				std::cout << "No contact with that index." << std::endl;
		}
	}
}

int			main(void)
{
	Contact	book[8];
	int		contacts = 0;
	int		choice = 0;

	while (choice != 3)
	{
		choice = pick_mode();
		if (choice == BOOK_ADD)
			add_contact(book, &contacts);
		else if (choice == BOOK_SEARCH)
		 	search_contact(book, contacts);
	}
	return (0);
}
