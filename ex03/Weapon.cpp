#include "Weapon.hpp"

Weapon::Weapon() {}

Weapon::Weapon(std::string typeOfW) : type(typeOfW) {}

Weapon::~Weapon() {}

std::string Weapon::getType() const
{
    return (type);
}

void    Weapon::setType(const std::string typeValue)
{
    type = typeValue;
}

