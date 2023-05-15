/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <Warintorn_L@outlook.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 21:24:37 by wluedara          #+#    #+#             */
/*   Updated: 2023/05/15 16:52:24 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phonebook.hpp"

int	main() {
	PhoneBook phonebook;

	std::string input;
	std::cout  << "\n ----------------------" << std::endl;
	std::cout << WHT << "|" << YEL << " WELCOME TO PHONEBOOK " << reset << "|" << std::endl;
	std::cout  << " ----------------------\n" << reset << std::endl;
	while (1)
	{
		std::cout << GRN << "\nWhat do u want form me?: " << std::endl;
		std::cout << RED << "1. ADD:    > to add info to contact" << std::endl;
		std::cout << RED << "2. SEARCH: > to search for a contact" << std::endl;
		std::cout << RED << "3. EXIT:   > close the phonebook\n" << reset << std::endl;

		if (!std::getline(std::cin, input))
			return (0);
		if (input == "ADD" || input == "add" || input == "1")
			phonebook.addContactInfo();
		else if (input == "SEARCH" || input == "search" || input == "2")
			phonebook.search();
		else if (input == "EXIT" || input == "exit" || input == "3")
			break;
		else
			std::cout << BRED << "\nCommand not found" << reset << std::endl;
	}
	
}
