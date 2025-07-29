#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    {//Temporaire, une fois que je sors et passe à la braquet suivante ce contenu dissparait.
        Weapon club("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        Weapon club("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
    return (0);
}
