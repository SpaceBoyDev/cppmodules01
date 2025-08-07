/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dario <dario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 23:02:50 by dario             #+#    #+#             */
/*   Updated: 2025/08/08 01:22:55 by dario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_HPP__
#define __ZOMBIE_HPP__

#include <string>

class Zombie
{
	public:
	Zombie(std::string zombieName);
	~Zombie(void);

	void announce(void);
	
	private:
	std::string	name;

};

#endif