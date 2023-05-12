#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <iomanip>
# include <string>
# include "colour.hpp"

class Contact {
	private:
		std::string firstname;
		std::string lastname;
		std::string nickname;
		std::string phonenumber;
		std::string darkestSecret;
	public:
		Contact();
		~Contact();

		void set_firstname( std::string first );
		void set_lasttname( std::string last );
		void set_phonenum( std::string phone );
		void set_darkest( std::string dark );

		std::string get_firstname( void );
		
};

#endif