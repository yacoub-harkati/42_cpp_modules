/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 00:43:10 by yaharkat          #+#    #+#             */
/*   Updated: 2024/09/01 15:40:13 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	_name = name;
}

Zombie::Zombie()
{
	_name = "default";
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << _name << " is destroyed" << std::endl;
}

void Zombie::announce()
{
	std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
