/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dario <dario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 23:02:50 by dario             #+#    #+#             */
/*   Updated: 2025/08/08 23:19:16 by dario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie
{
	public:
	Zombie();
	Zombie(std::string zombieName);
	~Zombie(void);

	void		announce(void);
	void		SetName(std::string name);
	
	private:
	std::string	name;
};

Zombie*	zombieHorde(int N, std::string name);

#endif