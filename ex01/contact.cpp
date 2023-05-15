/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <Warintorn_L@outlook.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:20:27 by wluedara          #+#    #+#             */
/*   Updated: 2023/05/15 16:35:35 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact() {
}

Contact::~Contact() {
}

std::string Contact::getFirst() {
	return (this->firstname);
}

std::string Contact::getLast() {
	return (this->lastname);
}

std::string Contact::getNick() {
	return (this->nickname);
}

std::string Contact::getPhone() {
	return (this->phonenumber);
}

std::string Contact::getDark() {
	return (this->darkestSecret);
}

void Contact::initContact( std::string first, std::string last, std::string nick, std::string phone, std::string dark ) {
	this->firstname = first;
	this->lastname = last;
	this->nickname = nick;
	this->phonenumber = phone;
	this->darkestSecret = dark;
}

void Contact::getContact() {
	
}
