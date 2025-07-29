#ifndef  ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class	Zombie
{
	private:
		std::string	name;//Appartient a chaque objet Zombie.
	public:
		Zombie();
		Zombie(std::string zombieName);//Le constructeur sert à initialiser mon objet avec le nom que je choisi de donner.
		~Zombie();
		void	announce( void );
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif
