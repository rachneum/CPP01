#include "HumanA.hpp"

HumanA::HumanA()
{
    std::cout << "HumanA constructor called." << std::endl;
}

HumanA::HumanA(std::string nameA, Weapon& weaponA) : name(nameA) , weapon(&weaponA)
{
    std::cout << name << " has been constructed." << std::endl;
}

HumanA::~HumanA()
{
    std::cout << name << " has been destroyed." << std::endl;
}

void    HumanA::attack()
{
    if (weapon)
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    else
        std::cout << name << " doesn't have any weapon!" << std::endl;
}
