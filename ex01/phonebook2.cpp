/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook2.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <Warintorn_L@outlook.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 23:41:48 by wluedara          #+#    #+#             */
/*   Updated: 2023/05/15 23:48:47 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook() {
	std::cout << RED << "\n  ^~^  ,                   " << std::endl;
	std::cout << RED << " ('Y') )                   " << std::endl;
	std::cout << RED << " /   \\/  " << BCYN << "WELCOME TO PHONEBOOK  " << reset << std::endl;
	std::cout << RED << "(\\|||/)              " << reset << std::endl;
}

PhoneBook::~PhoneBook() {
	std::cout << RED << "                      __    " << std::endl;
	std::cout << RED << "(\\,------------------'()'--o" << std::endl;
	std::cout << RED << " (_    _  " << BYEL << " BYE~" << RED << "  _    /~\" " << std::endl;
	std::cout << RED << "  (_)_)            (_)_)    \n" << std::endl;
}

int PhoneBook::checkDigit( std::string phone ) {
	for (int i = 0; phone[i]; i++) {
		if (!isdigit(phone[i]))
			return (0);
	}
	return (1);
}

void PhoneBook::header() {
	std::cout << YEL << "\n  ___                       ___  " << std::endl;
	std::cout << YEL << " (o o)                     (o o) " << std::endl;
	std::cout << YEL << "(  V  ) "<< BCYN << "Phonebook Contact"<< YEL << " (  V  )" << std::endl;
	std::cout << YEL << "--m-m-----------------------m-m--" << reset << std::endl;
}

void PhoneBook::printContact(int index) {
	std::cout << BMAG << "\nIndex\t\t| " << YEL << index << reset << std::endl;
	std::cout << BMAG << "Firstname\t| " << YEL << contact[index].getFirst() << reset << std::endl;
	std::cout << BMAG << "Lastname\t| " << YEL << contact[index].getLast() << reset << std::endl;
	std::cout << BMAG << "Nickname\t| " << YEL << contact[index].getNick() << reset << std::endl;
	std::cout << BMAG << "Phonenumber\t| " << YEL << contact[index].getPhone() << reset << std::endl;
}

void PhoneBook::search() {
	this->header();
	this->showContactAll();
	this->showContact();
}
