/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raneuman <raneuman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 18:27:14 by raneuman          #+#    #+#             */
/*   Updated: 2025/07/18 18:39:45 by raneuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie( std::string name )
{//J'alloue un zombie() dans ma heap que je stock dans heapZombie.
	Zombie	*heapZombie = new Zombie(name);//J'accede a mon attribut pv name via a mon constructeur appele ici.
	return	(heapZombie);//new Me permet de creer un objet sur le heap. == malloc
}
