/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dario <dario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 00:02:47 by dario             #+#    #+#             */
/*   Updated: 2025/08/09 00:24:43 by dario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) {}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon &newWeapon)
{
	_weapon = &newWeapon;
}

void HumanB::attack()
{
	std::cout << _name
		<< " attacks with their ";
	if (_weapon)
		std::cout << _weapon->getType();
	else
		std::cout << "bare hands :(";

	std::cout << std::endl;
}