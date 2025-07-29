#include "HumanB.hpp"

HumanB::HumanB() : weapon(NULL)
{
    std::cout << "HumanB constructor called." << std::endl;
}

HumanB::HumanB(std::string nameB) : name(nameB), weapon(NULL)
{
    std::cout << name << " has been constructed." << std::endl;
}

HumanB::~HumanB()
{
    std::cout << name << " has been destroyed." << std::endl;
}

void    HumanB::attack()
{
    if (weapon)
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    else
        std::cout << name << " doesn't have any weapon" << std::endl;
}

void    HumanB::setWeapon(Weapon &weaponB)
{
    weapon = &weaponB;
}
