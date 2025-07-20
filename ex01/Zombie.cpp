#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "Zombie " << name << " has been constructed." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << name << " has been destroyed." << std::endl;
}

void    Zombie::announce( void )
{
    std::cout << "Zombie " << name << " announces himself" << std::endl;
}

void    Zombie::setName(std::string hordeName)
{
    name = hordeName;
}
