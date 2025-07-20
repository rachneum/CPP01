#include "Zombie.hpp"

void	randomChump( std::string name )
{//Zombie ici est le type de l’objet que ju veux créer (donc la classe Zombie).
	Zombie	stackZombie(name);//stackZombie est le nom de la variable que je cree, l'objet.
	stackZombie.announce();	
}
