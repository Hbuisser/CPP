#include <iostream>

#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"

int main()
{
	{
		std::cout << "___________________Given Tests__________________" << std::endl;
		ISpaceMarine* bob = new TacticalMarine;
		ISpaceMarine* jim = new AssaultTerminator;
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
	}
	{
		std::cout << "___________________Other Tests_________________" << std::endl;
		std::cout << "_________CopyConstructor squad" << std::endl;
		ISpaceMarine* bob = new TacticalMarine;
		ISpaceMarine* jim = new AssaultTerminator;
		Squad vlc;
		vlc.push(bob);
		vlc.push(jim);
		Squad vlc1(vlc);
		for (int i = 0; i < vlc1.getCount(); ++i)
		{
			if (i == 0 || i == 1)
				std::cout << "---- TacticalMarine -------- " << std::endl;
			else
				std::cout << "---- AssaultTerminator -------- " << std::endl;
			ISpaceMarine* cur = vlc1.getUnit(i);
			cur->battleCry();
			cur->rangedAttack();
			cur->meleeAttack();
		}
		std::cout << "_____________AssignationOperator squad" << std::endl;
		Squad vlc2;
		vlc2 = vlc;
		for (int i = 0; i < vlc2.getCount(); ++i)
		{
			if (i == 0 || i == 1)
				std::cout << ">>TacticalMarine" << std::endl;
			else
				std::cout << ">>AssaultTerminator" << std::endl;
			ISpaceMarine* cur = vlc2.getUnit(i);
			cur->battleCry();
			cur->rangedAttack();
			cur->meleeAttack();
		}
	}
	{
	    std::cout << "_________________________More tests___________________________" << std::endl;
		std::cout << "________Copy constructor" << std::endl;

		ISpaceMarine *albert = new TacticalMarine;
		ISpaceMarine *etienne = new AssaultTerminator;
		ISpaceMarine *joseph = new AssaultTerminator;
		ISquad *test = new Squad;

		test->push(albert);
		test->push(etienne);
		test->push(etienne); // should not push (2x the same)
		test->push(joseph);
		test->push(nullptr); // should not add (null)

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

    	std::cout << "________Assignation operator ___________" << std::endl;

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

		test_copy2 = test2;

		std::cout << "TEST :" << test2 << std::endl;
		std::cout  << "TEST COPY :" << test_copy2 << std::endl;
		delete test_copy2; 
		test_copy = NULL;
		std::cout << "TEST :" << test2 << std::endl;
	}
	return 0;
}