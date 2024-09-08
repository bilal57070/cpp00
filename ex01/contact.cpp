#include "contact.hpp"

void	Contact::setfname(std::string f)
{
	fname = f;
}

void	Contact::setlast(std::string l)
{
	lname = l;
}

void	Contact::setnick(std::string n)
{
	nname = n;
}

void	Contact::setnbr(std::string nbr)
{
	number = nbr;
}

void	Contact::setsecret(std::string dark)
{
	secret = dark;
}

std::string	Contact::getfname()
{
	return(fname);
}

std::string	Contact::getlast()
{
	return(lname);
}

std::string	Contact::getnick()
{
	return(nname);
}

std::string	Contact::getnbr()
{
	return(number);
}

std::string	Contact::getsecret()
{
	return(secret);
}