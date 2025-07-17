/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raneuman <raneuman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 18:19:36 by raneuman          #+#    #+#             */
/*   Updated: 2025/07/17 19:39:43 by raneuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  ZOMBIE_H
# define ZOMBIE_H

# include <string>//Me permet d'utiliser std::string.
# include <iostream>
# include <iomanip>
# include <cctype>//Pour isspace.
# include <cstdlib>//Pour exit.

class	Zombie
{
	private:
		std::string	name;//Appartient a chque objet Zombie.
	public:
		Zombie(std::string zombieName);//Le constructeur sert à initialiser mon objet avec le nom que je choisi de donner.
		~Zombie();
		void	announce(void);
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);
		

#endif