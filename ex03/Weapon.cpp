/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dario <dario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 23:49:26 by dario             #+#    #+#             */
/*   Updated: 2025/08/09 00:00:10 by dario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weaponName) : _type(weaponName) {}

Weapon::~Weapon(void) {}

const std::string	&Weapon::getType(void)
{
	return (this->_type);
}

void Weapon::setType(std::string newType)
{
	_type = newType;
}
