/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 18:36:07 by smorty            #+#    #+#             */
/*   Updated: 2019/11/11 00:39:39 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

char	pick_mode()
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

void	add_contact(Contact **book, int contacts)
{
	if (contacts > 8)
		std::cout << "The phonebook is full" << std::endl;
	else
	{
		static Contact next;
		book[contacts++] = &next;
	}
}

int		main(void)
{
	Contact	*book[8];
	int		contacts = 0;
	char	choice = 0;

	while (choice != 3)
	{
		choice = pick_mode();
		if (choice == BOOK_ADD)
			add_contact(book, contacts);
		// else if (choice == 's')
		// 	search_contact(book, contacts);
	}
	return (0);
}
