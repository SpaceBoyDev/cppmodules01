#include "Zombie.hpp"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dario <dario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 22:44:04 by dario             #+#    #+#             */
/*   Updated: 2025/08/07 22:44:05 by dario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie() {}

Zombie::Zombie(std::string zombieName)
{
	this->name = zombieName;
}

Zombie::~Zombie(void)
{
	std::cout << this->name
		<< " eliminated"
		<< std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->name
		<< ": BraiiiiiiinnnzzzZ..."
		<< std::endl;
}

void	Zombie::SetName(std::string name)
{

}