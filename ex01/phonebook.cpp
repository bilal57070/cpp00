/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsafi <bsafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 16:38:59 by bsafi             #+#    #+#             */
/*   Updated: 2024/09/30 15:27:50 by bsafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "phonebook.hpp"
#include "contact.hpp"

void	Phonebook::in()
{
	index = 1;
}

void	Phonebook::add()
{
	std::string str;

	//if (std::cin.eof())
	//	exit(0);
	if (index == 7)
		index = 0;
	std::cout << "Enter first name : ";
//	if (std::cin.eof())
//		exit(0);
	getline(std::cin, str);
	while (str.empty())
	{
		if (std::cin.eof())
			exit(0);
		std::cout << "ENTER FIRST NAME !! : ";
		getline(std::cin, str);
	}
	ct[index].setfname(str);
	std::cout << "Enter seconde name : ";
	getline(std::cin, str);
	while (str.empty())
	{
		if (std::cin.eof())
			exit(0);
		std::cout << "ENTER SECOND NAME : ";
		getline(std::cin, str);
	}
	ct[index].setlast(str);
	std::cout << "Enter nick name : ";
	getline(std::cin, str);
	while (str.empty())
	{
		if (std::cin.eof())
			exit(0);
		std::cout << "ENTER nick NAME : ";
		getline(std::cin, str);
	}
	ct[index].setnick(str);
	std::cout << "Enter number : ";
	getline(std::cin, str);
	while (str.empty() || checknbr(str))
	{
		if (std::cin.eof())
			exit(0);
		std::cout << "ENTER number : ";
		getline(std::cin, str);
	}
	ct[index].setnbr(str);
	std::cout << "Enter darkest secret : ";
	getline(std::cin, str);
	while (str.empty())
	{
		if (std::cin.eof())
			exit(0);
		std::cout << "ENTER darkest secret : ";
		getline(std::cin, str);
	}
	ct[index].setsecret(str);
	index++;
//	str = ct[0].getfname();
//	std::cout << str;
}

void	Phonebook::search()
{
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::string fn;
	std::string ln;
	std::string nn;
	std::string get;
	int			getnbr;
	int	i = 0;
	while (++i <= 7)
	{
		fn = ct[i].getfname();
		if (fn.empty())
			break;
		ln = ct[i].getlast();
		nn = ct[i].getnick();
		if (fn.size() > 10)
		{
			fn.erase(10);
			fn[9] = '.';
		}
		if (ln.size() > 10)
		{
			ln.erase(10);
			ln[9] = '.';
		}
		if (nn.size() > 10)
		{
			nn.erase(10);
			nn[9] = '.';
		}
		std::cout << "|" << std::setw(10) << std::right << i;
		std::cout << "|" << std::setw(10) << std::right << fn;
		std::cout << "|" << std::setw(10) << std::right << ln;
		std::cout << "|" << std::setw(10) << std::right << nn;
		std::cout << "|" << std::endl;
	}
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "Enter an index :";
	getline(std::cin, get);
	while ((checknbr(get)) || get.empty())
	{
		if (std::cin.eof())
			exit(0);
		std::cout << "ENTER A VALID INDEX :";
		getline(std::cin, get);
	}
	getnbr = std::stoi(get);
	while (getnbr > i)
	{
		std::cout << "ENTER A VALID INDEX :";
		getline(std::cin, get);
		if (std::cin.eof())
			exit(0);
		while ((checknbr(get)))
		{
			std::cout << "ENTER A VALID INDEX :";
			getline(std::cin, get);
		}
		getnbr = std::stoi(get);
	}
	std::cout << ct[getnbr].getfname() << std::endl;
	std::cout << ct[getnbr].getlast() << std::endl;
	std::cout << ct[getnbr].getnick() << std::endl;
	std::cout << ct[getnbr].getnbr() << std::endl;
	std::cout << ct[getnbr].getsecret() << std::endl;
}

int	checknbr(std::string str)
{
	for(char c : str)
	{
		if (!std::isdigit(c))
			return (1);
	}
	return (0);
}