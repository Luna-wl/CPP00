/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <Warintorn_L@outlook.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 21:24:37 by wluedara          #+#    #+#             */
/*   Updated: 2023/05/12 22:32:03 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phonebook.hpp"

int	main() {
	PhoneBook phonebook;
	// Contact contact;
	
	// contact.set_firstname("fah");

	// std::cout << contact.get_firstname() << std::endl;

	std::string input;
	while (1)
	{
		std::cout << "\nEnter a command: " << std::endl;
		std::cout << "1. ADD" << std::endl;
		std::cout << "2. SEARCH" << std::endl;
		std::cout << "3. EXIT" << std::endl;

		std::getline(std::cin, input);
		// if (input == "ADD" || input == "add" || input == "1")
			// phonebook.addcontact();
	}
	
}
