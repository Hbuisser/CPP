#include <iostream>
#include <unistd.h>

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

// int main()
// {
//     Sorcerer robert("Robert", "the Magnificent");
//     Victim jim("Jimmy");
//     Peon joe("Joe");
//     std::cout << robert << jim << joe;
//     robert.polymorph(jim);
//     robert.polymorph(joe);
//     return 0;
// }

int main(void)
{
    {
        std::cout << "_______________SORCERER_________________" << std::endl;
        Sorcerer A("Henry", "Le King");
        Sorcerer B("Jo", "Le sorcier");
        Sorcerer C(A);

        std::cout << B;
        B = A;
		std::cout << std::endl << "______________Jo Introduction" << std::endl;
		B.announce();
        std::cout << B;
    }
    {
        std::cout << std::endl << "____________________VICTIM_______________" << std::endl;
        Victim v1("Bob");
		std::cout << std::endl << "_______________Introduction" << std::endl;
        std::cout << v1;
		v1.getPolymorphed();
    }
    {
        std::cout << std::endl << "_____________________PEON__________________" << std::endl;
        Peon v2("Bill");
        std::cout << v2;
		v2.getPolymorphed();
    }
	{
		std::cout << std::endl << "__________________ALL FOR ONE______________" << std::endl;
		Sorcerer	s("Henry", "The King");
		Victim		*v, *p;

		v = new Victim;
		p = new Peon;

		std::cout << std::endl << "___________________Polymorph The Victim" << std::endl;
		s.polymorph(*v);
		std::cout << std::endl << "___________________Polymorph The Peon" << std::endl;
		s.polymorph(*p);

		delete v;
		delete p;
	}
    {
        std::cout << std::endl << "___________________GIVEN TESTS__________________" << std::endl;

        Sorcerer	robert("Robert", "the Magnificent");
        Victim		jim("Jimmy");
        Peon		joe("Joe");
        std::cout << robert << jim << joe;
        robert.polymorph(jim);
        robert.polymorph(joe);
    }
    return (0);
}