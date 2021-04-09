#include <iostream>

#include "Character.hpp"
#include "RadScorpion.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"

int main()
{
    Character* moi = new Character("moi");
    std::cout << *moi;

    Enemy* b = new RadScorpion();

    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();
    
    moi->equip(pr);
    std::cout << *moi;
    moi->equip(pf);
    moi->attack(b);
    
    std::cout << *moi;
    moi->equip(pr);
    std::cout << *moi;
    
    moi->attack(b);
    std::cout << *moi;
    
    moi->attack(b);
    std::cout << *moi;

    std::cout << "___________SuperMutant test_____________" << std::endl;
    SuperMutant *s = new SuperMutant();
    moi->recoverAP();
    moi->recoverAP();
    std::cout << *moi;
    moi->attack(s);
    std::cout << "HP of SuperMutant : " << s->getHP() << std::endl;
    moi->equip(pf);
    moi->attack(s);
    std::cout << "HP of SuperMutant : " << s->getHP() << std::endl;
    moi->attack(s);
    std::cout << "HP of SuperMutant : " << s->getHP() << std::endl;
    moi->attack(s);
    std::cout << "HP of SuperMutant : " << s->getHP() << std::endl;
    moi->attack(s);
    std::cout << *moi;
    std::cout << "HP of SuperMutant : " << s->getHP() << std::endl;
    moi->attack(s);
    return 0;
}