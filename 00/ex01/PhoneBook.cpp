/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 18:12:20 by yaharkat          #+#    #+#             */
/*   Updated: 2024/07/04 16:59:46 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string formatOutput(std::string str)
{
	int	len;

	len = str.length();
	if (len > 10)
	{
		str = str.substr(0, 9);
		str += ".";
	}
	else if (len < 10)
	{
		for (int i = 0; i < 10 - len; i++)
			str = " " + str;
	}
	return (str);
}

PhoneBook::PhoneBook(void)
{
	this->contactIndex = 0;
}

PhoneBook::PhoneBook(Contact contacts[8], int contactIndex)
{
	contacts = contacts;
	contactIndex = contactIndex;
}

void PhoneBook::addContact(void)
{
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;
	std::cout << "Enter first name: ";
	std::getline(std::cin, firstName);
	if (std::cin.eof())
		return ;
	std::cout << "Enter last name: ";
	std::getline(std::cin, lastName);
	if (std::cin.eof())
		return ;
	std::cout << "Enter nickname: ";
	if (std::cin.eof())
		return ;
	std::getline(std::cin, nickName);
	std::cout << "Enter phone number: ";
	if (std::cin.eof())
		return ;
	std::getline(std::cin, phoneNumber);
	std::cout << "Enter darkest secret: ";
	if (std::cin.eof())
		return ;
	std::getline(std::cin, darkestSecret);
	if (std::cin.eof())
		return ;
	Contact contact(firstName, lastName, nickName, phoneNumber, darkestSecret);
	if (contactIndex < 8)
	{
		contacts[contactIndex] = contact;
		contactIndex++;
	}
	else
	{
		this->contactIndex = 0;
		contacts[contactIndex] = contact;
	}
	std::cout << "Contact added successfully!" << std::endl;
}

void PhoneBook::displayContacts(void)
{
	std::cout << "     index|first name| last name|  nickname" << std::endl;
	for (int i = 0; i < 8 && !this->contacts[i].isEmpty(); i++)
	{
		std::cout << "         " << i << "|";
		std::cout << formatOutput(this->contacts[i].getFirstName()) << "|";
		std::cout << formatOutput(this->contacts[i].getLastName()) << "|";
		std::cout << formatOutput(this->contacts[i].getNickName()) << std::endl;
	}
}

void PhoneBook::displayOneContact(int i)
{
	std::cout << "First Name: " << this->contacts[i].getFirstName() << std::endl;
	std::cout << "Last Name: " << this->contacts[i].getLastName() << std::endl;
	std::cout << "Nick Name: " << this->contacts[i].getNickName() << std::endl;
	std::cout << "Phone Number: " << this->contacts[i].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << this->contacts[i].getDarkestSecret() << std::endl;
}

void PhoneBook::searchContact(void)
{
	int	index;

	this->displayContacts();
	std::cout << "Enter the index of the Contact you're searching for: ";
	if (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Input failed. Exiting search." << std::endl;
		return ;
	}
	std::cin >> index;
	if (index > this->contactIndex)
	{
		std::cout << "Index out of Range!!" << std::endl;
		if (std::cin)
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		return ;
	}
	else
		this->displayOneContact(index);
	if (std::cin)
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int	main(void)
{
	std::string command;
	PhoneBook phoneBook;
	std::cout << "Welcome to the phonebook!" << std::endl;
	std::cout << "Available commands: ADD, SEARCH, EXIT" << std::endl;
	while (true)
	{
		std::cout << "Please enter a command: ";
		if (!std::getline(std::cin, command))
		{
			if (std::cin.eof())
				std::cout << std::endl
							<< "EOF encountered, \
					exiting..."
							<< std::endl;
			else
				std::cout << std::endl
							<< "Input error, \
					exiting..."
							<< std::endl;
			break ;
		}
		if (command == "ADD")
			phoneBook.addContact();
		else if (command == "SEARCH")
			phoneBook.searchContact();
		else if (command == "EXIT")
			break ;
		else
			std::cout << "Invalid command!" << std::endl;
	}
	return (0);
}