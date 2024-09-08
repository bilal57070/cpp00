#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string.h>
#include "contact.hpp"

class Phonebook {
private:
	Contact ct[8];
	int		index;

public:
	void in();
	void add();
	void search();
};

int	checknbr(std::string str);

#endif