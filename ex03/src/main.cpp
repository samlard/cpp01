#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("som club");
        bob.attack();
        club.setType("some other type of club");

    }
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.attack();
        jim.setWeapon(club);
        club.setType("some club");
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
return 0;
}