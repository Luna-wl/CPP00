/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <Warintorn_L@outlook.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:20:27 by wluedara          #+#    #+#             */
/*   Updated: 2023/05/12 22:28:22 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact() {
	std::cout << GRN << "contact construct" << reset << std::endl;
}

void Contact::set_firstname( std::string first ) {
	this->firstname = first;
}

void Contact::set_lasttname( std::string last ) {
	this->lastname = last;
}

void Contact::set_phonenum( std::string phone ) {
	this->phonenumber = phone;
}

void Contact::set_darkest( std::string dark ) {
	this->darkestSecret = dark;
}

std::string Contact::get_firstname( void ) {
	return this->firstname;
}

Contact::~Contact() {
	std::cout << RED << "contact deconstruct" << reset << std::endl;
}
