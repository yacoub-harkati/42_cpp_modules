/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 18:54:38 by yaharkat          #+#    #+#             */
/*   Updated: 2024/06/10 22:59:23 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
class Contact
{
  private:
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;

  public:
	Contact()
	{
		firstName = "Empty";
		lastName = "Empty";
		nickName = "Empty";
		phoneNumber = "Empty";
		darkestSecret = "Empty";
	}
	Contact(std::string firstName, std::string lastName, std::string nickName,
		std::string phoneNumber, std::string darkestSecret)
	{
		this->setFirstName(firstName);
		this->setLastName(lastName);
		this->setNickName(nickName);
		this->setPhoneNumber(phoneNumber);
		this->setDarkestSecret(darkestSecret);
	}
	void setFirstName(std::string firstName)
	{
		if (firstName.length() > 0)
			this->firstName = firstName;
		else
			this->firstName = "Empty";
	}
	void setLastName(std::string lastName)
	{
		if (lastName.length() > 0)
			this->lastName = lastName;
		else
			this->lastName = "Empty";
	}
	bool isEmpty(void)
	{
		if (this->firstName == "Empty" && this->lastName == "Empty"
			&& this->nickName == "Empty" && this->phoneNumber == "Empty"
			&& this->darkestSecret == "Empty")
			return (1);
		else
			return (0);
	}
	void setNickName(std::string nickName)
	{
		if (nickName.length() > 0)
			this->nickName = nickName;
		else
			this->nickName = "Empty";
	}
	void setPhoneNumber(std::string phoneNumber)
	{
		if (phoneNumber.length() > 0)
			this->phoneNumber = phoneNumber;
		else
			this->phoneNumber = "Empty";
	}
	void setDarkestSecret(std::string darkestSecret)
	{
		if (darkestSecret.length() > 0)
			this->darkestSecret = darkestSecret;
		else
			this->darkestSecret;
	}
	std::string getFirstName()
	{
		return (this->firstName);
	}
	std::string getLastName()
	{
		return (this->lastName);
	}
	std::string getNickName()
	{
		return (this->nickName);
	}
	std::string getPhoneNumber()
	{
		return (this->phoneNumber);
	}
	std::string getDarkestSecret()
	{
		return (this->darkestSecret);
	}
};

#endif