#include <string.h>
#include <stdio.h>
#include <iostream>
#include "contact.hpp"
#include "phonebook.hpp"

int	main(int ac, char **av)
{
	std::string wrd;
	Phonebook tel;

	(void)av;
	tel.in();
	if (ac == 1)
	{
		while (1)
		{
			getline(std::cin, wrd);
			if (wrd == "ADD")
				tel.add();
			if (wrd == "SEARCH")
				tel.search();
			if (wrd == "EXIT")
				break;
		}
	}
}