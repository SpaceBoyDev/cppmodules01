/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dario <dario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 22:44:02 by dario             #+#    #+#             */
/*   Updated: 2025/08/08 23:26:50 by dario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int		nZombies = 999999;
	Zombie *horde = zombieHorde(nZombies, "hola");
	
	if (!horde)
		return (0);
	for (int i = 0; i < nZombies; i++)
		horde[i].announce();

	delete[] horde;
	
	return (0);	
}