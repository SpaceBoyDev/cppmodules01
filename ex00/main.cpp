/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dario <dario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 22:44:02 by dario             #+#    #+#             */
/*   Updated: 2025/08/08 01:36:14 by dario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int argc, char **argv)
{
	for (int i = 1; i < argc; i++)
	{
		Zombie	*heapZombie = newZombie(argv[i]);
		heapZombie->announce();
		delete heapZombie;
	}

	for (int i = 1; i < argc; i++)
		randomChump(argv[i]);
	
	return (0);	
}