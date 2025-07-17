/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raneuman <raneuman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 18:24:37 by raneuman          #+#    #+#             */
/*   Updated: 2025/07/17 20:08:56 by raneuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	randomChump(std::string name)
{//Zombie ici est le type de l’objet que ju veux créer (donc la classe Zombie).
	Zombie	stackZombie(name);//stackZombie est le nom de la variable que je cree, l'objet.
	stackZombie.announce();	
}
