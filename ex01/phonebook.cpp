/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <Warintorn_L@outlook.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 14:51:04 by wluedara          #+#    #+#             */
/*   Updated: 2023/05/15 17:54:45 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phonebook.hpp"

PhoneBook::PhoneBook() {
	std::cout << GRN << "\n __|  |________________|  |__ " << std::endl;
	std::cout << GRN << "(__|  |________________|  |__)" << std::endl;
	std::cout << GRN << "   |  |                |  |   " << std::endl;
	std::cout << GRN << "   |  | " << BRED <<"Open PhoneBook" << GRN << " |  |   " << std::endl;
	std::cout << GRN << " __|  |________________|  |__ " << std::endl;
	std::cout << GRN << "(__|  |________________|  |__)" << std::endl;
	std::cout << GRN << "   |  |                |  |   " << reset << std::endl;
}

PhoneBook::~PhoneBook() {
	std::cout << BLU << "                      __    " << std::endl;
	std::cout << BLU << "(\\,------------------'()'--o" << std::endl;
	std::cout << BLU << " (_    _  " << BYEL << " BYE~" << BLU << "  _    /~\" " << std::endl;
	std::cout << BLU << "  (_)_)            (_)_)    " << std::endl;
}

void PhoneBook::addContactInfo() {
	Contact contact;
	static int i = 0;
	std::string first;
	std::string last;
	std::string nick;
	std::string phone;
	std::string dark;
	
	std::cout << BLU << "\nPlease add info: " << std::endl;
	std::cout << CYN << "First name: " << reset;
	if (!std::getline(std::cin, first))
		return;
	std::cout << CYN << "Last name: " << reset;
	if (!std::getline(std::cin, last))
		return;
	std::cout << CYN << "Nick name: " << reset;
	if (!std::getline(std::cin, nick))
		return;
	std::cout << CYN << "Phonenumber: " << reset;
	if (!std::getline(std::cin, phone))
		return;
	std::cout << CYN << "Darkest secret: " << reset;
	if (!std::getline(std::cin, dark))
		return;
	if (first == "" || last == "") {
		std::cout << RED << "\nPlease insert data" << reset << std::endl;
		return;
	}
	
	contact.initContact(first, last, nick, phone, dark);

	this->contact[i] = contact;
	i++;
	if (i > 7)
		i = 0;
}

void PhoneBook::header() {
	std::cout << BLU << "\n  ___                       ___  " << std::endl;
	std::cout << BLU << " (o o)                     (o o) " << std::endl;
	std::cout << BLU << "(  V  ) "<< BCYN << "Phonebook Contact"<< BLU << " (  V  )" << std::endl;
	std::cout << BLU << "--m-m-----------------------m-m--" << reset << std::endl;
}

void PhoneBook::printContact(int index) {
	std::cout << BMAG << "\nIndex\t\t| " << YEL << index << reset << std::endl;
	std::cout << BMAG << "Firstname\t| " << YEL << contact[index].getFirst() << reset << std::endl;
	std::cout << BMAG << "Lastname\t| " << YEL << contact[index].getLast() << reset << std::endl;
	std::cout << BMAG << "Nickname\t| " << YEL << contact[index].getNick() << reset << std::endl;
	std::cout << BMAG << "Phonenumber\t| " << YEL << contact[index].getPhone() << reset << std::endl;
}

void PhoneBook::showContact() {
	std::string i;
	int index;

	this->header();
	std::cout << YEL <<"\nWho are you looking for? o_O" << std::endl;
	std::cout << GRN << "\n>> ";
	if (!std::getline(std::cin, i))
		return;
	index = stoi(i);
	if (index < 0 || index > 7) {
		std::cout << RED << "There's no data about who u search ಠ_ಠ" << reset << std::endl;
		return;
	}
	std::cout << CYN << "\n======= Info =======" << reset << std::endl;
	this->printContact(index);
	std::cout << BMAG << "Darkest Secret\t| " << YEL << contact[index].getDark() << reset << std::endl;
	std::cout << CYN << "\n====================" << reset << std::endl;
	
}

void PhoneBook::showContactAll() {
	this->header();
	for (int i = 0; i < 8; i++) {
		std::cout << CYN << "\n======= Info =======" << reset << std::endl;
		this->printContact(i);
		std::cout << CYN << "\n====================" << reset << std::endl;
	}
}

void PhoneBook::search() {
	this->showContactAll();
	this->showContact();
}