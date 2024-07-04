/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conctact.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 16:47:29 by yaharkat          #+#    #+#             */
/*   Updated: 2024/07/04 16:55:44 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	_firstName = "    --    ";
	_lastName = "    --    ";
	_nickName = "    --    ";
	_phoneNumber = "    --    ";
	_darkestSecret = "    --    ";
}
Contact::Contact(std::string firstName, std::string lastName,
	std::string nickName, std::string phoneNumber, std::string darkestSecret)
{
	setFirstName(firstName);
	setLastName(lastName);
	setNickName(nickName);
	setPhoneNumber(phoneNumber);
	setDarkestSecret(darkestSecret);
}
void Contact::setFirstName(std::string firstName)
{
	if (firstName.length() > 0)
		_firstName = firstName;
	else
		_firstName = "    --    ";
}
void Contact::setLastName(std::string lastName)
{
	if (lastName.length() > 0)
		_lastName = lastName;
	else
		_lastName = "    --    ";
}
bool Contact::isEmpty(void)
{
	if (_firstName == "    --    " && _lastName == "    --    "
		&& _nickName == "    --    " && _phoneNumber == "    --    "
		&& _darkestSecret == "    --    ")
		return (1);
	else
		return (0);
}
void Contact::setNickName(std::string nickName)
{
	if (nickName.length() > 0)
		_nickName = nickName;
	else
		_nickName = "    --    ";
}
void Contact::setPhoneNumber(std::string phoneNumber)
{
	if (phoneNumber.length() > 0)
		_phoneNumber = phoneNumber;
	else
		_phoneNumber = "    --    ";
}
void Contact::setDarkestSecret(std::string darkestSecret)
{
	if (darkestSecret.length() > 0)
		_darkestSecret = darkestSecret;
	else
		_darkestSecret;
}
std::string Contact::getFirstName()
{
	return (_firstName);
}
std::string Contact::getLastName()
{
	return (_lastName);
}
std::string Contact::getNickName()
{
	return (_nickName);
}
std::string Contact::getPhoneNumber()
{
	return (_phoneNumber);
}
std::string Contact::getDarkestSecret()
{
	return (_darkestSecret);
}