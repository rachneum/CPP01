#include "Weapon.hpp"

Weapon::Weapon()
{
    std::cout << "Weapon constructor called." << std::endl;
}

Weapon::Weapon(std::string typeOfW) : type(typeOfW)
{
    std::cout << "Weapon of type '" << type << "' created." << std::endl;
}

Weapon::~Weapon()
{
    std::cout << "Weapon destructor called." << std::endl;
}

const std::string&  Weapon::getType() const
{
    return (type);
}

void    Weapon::setType(const std::string typeValue)
{
    type = typeValue;
}

