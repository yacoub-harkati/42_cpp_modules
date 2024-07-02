/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 18:12:20 by yaharkat          #+#    #+#             */
/*   Updated: 2024/06/11 21:43:51 by yaharkat         ###   ########.fr       */
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
		std::getline(std::cin, command);
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