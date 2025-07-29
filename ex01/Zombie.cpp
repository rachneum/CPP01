#include "Zombie.hpp"

Zombie::Zombie()
{
    if (name.empty())
        std::cout << "A nameless zombie has been constructed." << std::endl;
    else
        std::cout << "Zombie " << name << " has been constructed." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << name << " has been destroyed." << std::endl;
}

void    Zombie::announce( void )
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::setName(std::string hordeName)
{
    name = hordeName;
}
