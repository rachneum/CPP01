/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raneuman <raneuman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 18:18:03 by raneuman          #+#    #+#             */
/*   Updated: 2025/07/18 18:38:26 by raneuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		Zombie	*heapZombie = newZombie("Mimi Kai");
		heapZombie->announce();
		randomChump("Rachel");
		delete heapZombie;
		return (0);
	}
	else
	{
		std::cerr << "Error: Not the right amount of arguments!" << std::endl;
		return (EXIT_FAILURE); 
	}
	return (0);
}