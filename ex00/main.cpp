/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dario <dario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 22:44:02 by dario             #+#    #+#             */
/*   Updated: 2025/08/07 23:02:27 by dario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *heapZ = newZombie("HeapZombie");
    
    heapZ->announce();
    delete (heapZ);
    
    randomChump("StackZombie");
	return (0);	
}