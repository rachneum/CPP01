#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie(std::string zombieName) : name(zombieName)
{
    std::cout << "Zombie " << name << " has been constructed." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << name << " has been destroyed." << std::endl;
}

void	Zombie::announce( void )
{
	std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
