#include "Zombie.hpp"

int main()
{
    Zombie* horde = zombieHorde(6, "Mimi Kai");
    for (int i = 0; i < 6; i++)
        horde[i].announce();
    delete[]horde;
    
    return (0);
}
