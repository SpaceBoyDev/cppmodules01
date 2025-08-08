/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dario <dario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 23:47:10 by dario             #+#    #+#             */
/*   Updated: 2025/08/09 00:03:11 by dario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon
{
	public:
	Weapon(std::string weaponName);
	~Weapon(void);

	const std::string	&getType(void);
	void				setType(std::string newType);

	private:
	std::string	_type;
};

#endif