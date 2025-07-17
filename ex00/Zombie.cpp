/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raneuman <raneuman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 18:25:25 by raneuman          #+#    #+#             */
/*   Updated: 2025/07/17 20:03:39 by raneuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string zombieName) : name(zombieName) {
    std::cout << "Zombie " << name << " has been constructed." << std::endl;
}

Zombie::~Zombie() {
    std::cout << "Zombie " << name << " has been destroyed." << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
