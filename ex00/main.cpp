#include "Zombie.hpp"

int	main()
{
	Zombie*	heapZombie = newZombie("Mimi Kai");
	heapZombie->announce();
	randomChump("Rachel");
	delete heapZombie;
	
	return (0);
}
