#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

class   Weapon
{
    private:
        std::string type;
    public:
        Weapon();
        Weapon(std::string typeOfW);
        ~Weapon();
        std::string getType() const;
        void        setType(const std::string typeValue);
};

#endif
