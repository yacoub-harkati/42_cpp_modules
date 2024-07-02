/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 18:12:20 by yaharkat          #+#    #+#             */
/*   Updated: 2024/07/02 09:23:14 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

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
				std::cout << std::endl << "EOF encountered, exiting..." << std::endl;
			else
				std::cout << std::endl << "Input error, exiting..." << std::endl;
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