#include <iostream>

#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"

int main()
{
    std::cout << "________________Given tests______________" << std::endl;

    ISpaceMarine *bob = new TacticalMarine;
    ISpaceMarine *jim = new AssaultTerminator;
    ISquad* vlc = new Squad;

    vlc->push(bob);
    vlc->push(jim);
    for (int i = 0; i < vlc->getCount(); ++i)
    {
        ISpaceMarine* cur = vlc->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    delete vlc;

    std::cout << "_________________________My tests___________________________" << std::endl;
    std::cout << "________Copy constructor (not deep)___________" << std::endl;

    ISpaceMarine *albert = new TacticalMarine;
    ISpaceMarine *etienne = new AssaultTerminator;
    ISpaceMarine *joseph = new AssaultTerminator;
    ISquad *test = new Squad;

    test->push(albert);
    test->push(etienne);
    test->push(etienne); // should not push
    test->push(joseph);
    test->push(nullptr); // should not add

    ISquad *test_copy(test);
    std::cout << test << std::endl;
    std::cout << test_copy << std::endl;

    for (int i = 0; i < test->getCount(); ++i)
    {
        ISpaceMarine* cur = test->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    delete test;

    std::cout << "________Assignation operator (deep)___________" << std::endl;

    ISpaceMarine *a = new TacticalMarine;
    ISpaceMarine *b = new AssaultTerminator;
    ISpaceMarine *c = new AssaultTerminator;
    ISquad *test2 = new Squad;
    ISquad *test_copy2 = new Squad;

    test2->push(a);
    test2->push(b);
    test2->push(b); // should not push
    test2->push(c);
    test2->push(nullptr); // should not add

    test_copy = test; // check if deep copy - same address ??
    std::cout << test << std::endl;
    std::cout << test_copy << std::endl;

    for (int i = 0; i < test2->getCount(); ++i)
    {
        ISpaceMarine* cur = test2->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }

    delete test;
    //delete test_copy;

    return 0;
}