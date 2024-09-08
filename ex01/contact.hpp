#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact {
private:
	std::string fname;
	std::string lname;
	std::string nname;
	std::string number;
	std::string secret;

public:
	void setfname(std::string f);
	void setlast(std::string l);
	void setnick(std::string n);
	void setnbr(std::string nbr);
	void setsecret(std::string dark);

	std::string getfname(void);
	std::string getlast(void);
	std::string getnick(void);
	std::string getnbr(void);
	std::string getsecret(void);
};

#endif