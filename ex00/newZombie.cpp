#include "Zombie.hpp"

Zombie*	newZombie( std::string name )
{//J'alloue un zombie() dans ma heap que je stock dans heapZombie.
	Zombie*	heapZombie = new Zombie(name);//J'accede a mon attribut pv name via a mon constructeur appele ici.
	return	(heapZombie);//new me permet de creer un objet sur le heap. == malloc
}
