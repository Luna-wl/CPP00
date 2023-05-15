/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <Warintorn_L@outlook.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 21:24:37 by wluedara          #+#    #+#             */
/*   Updated: 2023/05/15 23:49:23 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phonebook.hpp"

int	main() {
	PhoneBook phonebook;

	std::string input;
	std::cout << GRN << "\nWhat do u want form me?: " << std::endl;
	while (1)
	{
		std::cout << CYN << "\n1. ADD:    > to add info to contact" << std::endl;
		std::cout << CYN << "2. SEARCH: > to search for a contact" << std::endl;
		std::cout << CYN << "3. EXIT:   > close the phonebook\n" << reset << std::endl;
		std::cout << CYN << "\nInsert command\n>> ";
		if (!std::getline(std::cin, input))
			return (0);
		if (input == "ADD" || input == "add" || input == "1")
			phonebook.addContactInfo();
		else if (input == "SEARCH" || input == "search" || input == "2")
			phonebook.search();
		else if (input == "EXIT" || input == "exit" || input == "3")
			break;
		else {
			std::cout << BRED << "\n.-. .-. .  . .  . .-. . . .-.   . . .-. .-.   .-. .-. . . . . .-. " << reset << std::endl;
			std::cout << BRED << "|   | | |\\/| |\\/| |-| |\\| |  )  |\\| | |  |    |-  | | | | |\\| |  )" << reset << std::endl;
			std::cout << BRED << "`-' `-' '  ` '  ` ` ' ' ` `-'   ' ` `-'  '    '   `-' `-' ' ` `-' " << reset << std::endl;
			
			// std::cout << BRED << "\nCommand not found" << reset << std::endl;
		}
	}
	
}
