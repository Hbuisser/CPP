#include <iostream>

#include "Character.hpp"
#include "RadScorpion.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"

int main()
{
	{
		std::cout << "----------------- Given Tests --------------" << std::endl;
		Character *me = new Character("me");
		std::cout << *me;
		Enemy *b = new RadScorpion;
		AWeapon *pr = new PlasmaRifle;
		AWeapon *pf = new PowerFist;

		me->equip(pr);
		std::cout << *me;
		me->equip(pf);

		me->attack(b);
		std::cout << *me;
		me->equip(pr);
		std::cout << *me;
		me->attack(b);
		std::cout << *me;
		me->attack(b);
		std::cout << *me;

		std::cout << std::endl <<"_______________Other Tests_____________" << std::endl;
		Character	gamer("Henry");
		b = new SuperMutant;

		std::cout << gamer << std::endl;
		std::cout << " >> Attack with no Weapon" << std::endl;
		gamer.attack(b);
		std::cout << " >> Equip PowerFist" << std::endl;
		gamer.equip(pf);
		std::cout << " >> Attack SuperMutant with PowerFist" << std::endl;
		gamer.attack(b);
		gamer.attack(b);
		gamer.attack(b);
		std::cout << " >> Attack SuperMutant with PowerFist and die" << std::endl;
		gamer.attack(b);
		std::cout << " >> Gamer recover AP" << std::endl;
		gamer.recoverAP();
		std::cout << gamer;
		gamer.recoverAP();
		gamer.recoverAP();
		std::cout << gamer;
		gamer.recoverAP();
		std::cout << gamer;
		std::cout << " >> AP are full" << std::endl;
		gamer.recoverAP();
		gamer.recoverAP();
		std::cout << gamer;
		std::cout << " >> UnEquip PowerFist" << std::endl;
		gamer.equip(0);

		std::cout << "___________SuperMutant test_____________" << std::endl;
        SuperMutant *s = new SuperMutant();
        me->recoverAP();
        me->recoverAP();
        std::cout << *me;
        me->attack(s);
        std::cout << "HP of SuperMutant : " << s->getHP() << std::endl;
        me->equip(pf);
        me->attack(s);
        std::cout << "HP of SuperMutant : " << s->getHP() << std::endl;
        me->attack(s);
        std::cout << "HP of SuperMutant : " << s->getHP() << std::endl;
        me->attack(s);
        std::cout << "HP of SuperMutant : " << s->getHP() << std::endl;
        me->attack(s);
        std::cout << *me;
        std::cout << "HP of SuperMutant : " << s->getHP() << std::endl;
        me->attack(s);
        return 0;
	}
	return 0;
}
