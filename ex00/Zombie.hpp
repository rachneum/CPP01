#ifndef  ZOMBIE_H
# define ZOMBIE_H

# include <string>//Me permet d'utiliser std::string.
# include <iostream>
# include <cctype>//Pour isspace.
# include <cstdlib>//Pour exit.

class	Zombie
{
	private:
		std::string	name;//Appartient a chque objet Zombie.
	public:
		Zombie();
		Zombie(std::string zombieName);//Le constructeur sert à initialiser mon objet avec le nom que je choisi de donner.
		~Zombie();
		void	announce( void );
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif
