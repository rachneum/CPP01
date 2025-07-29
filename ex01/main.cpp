#include "Zombie.hpp"

int main()
{
    Zombie* horde = zombieHorde(6, "Mimi Kai");
    for (int i = 0; i < 6; i++)
        horde[i].announce();
    delete[]horde;

    std::cout << "---- Empty horde test ----" << std::endl;
    Zombie* emptyHorde = zombieHorde(0, "Nobody");
    if (!emptyHorde)
        std::cout << "No zombies were created." << std::endl;
    else
    {
        std::cout << "This should not happen!" << std::endl;
        delete[] emptyHorde;
    }
    return (0);
}
