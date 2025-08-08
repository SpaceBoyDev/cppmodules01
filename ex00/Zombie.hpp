/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dario <dario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 23:02:50 by dario             #+#    #+#             */
/*   Updated: 2025/08/08 23:52:51 by dario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie
{
	public:
	Zombie(std::string zombieName);
	~Zombie(void);

	void		announce(void);
	
	private:
	std::string	_name;
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif