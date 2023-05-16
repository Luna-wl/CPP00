#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

# include "contact.hpp"

class PhoneBook {
	private:
		Contact contact[8];
	public:
		PhoneBook();
		~PhoneBook();

		void addContactInfo();
		void showContact();
		void showContactAll();
		void header();
		void search();
		void printContact( int index );
		int  checkDigit( std::string phone );
};

#endif