#include <iostream>

#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main()
{
	std::cout << "----------------- Given Tests --------------" << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << "----------------- Other Tests --------------" << std::endl;
	me->use(42, *bob);
	tmp = src->createMateria("Or Saphir");
	me->equip(tmp);
	me->use(2, *bob);
	if (tmp == 0)
		std::cout << "Good because the material 'Or Saphir' Does not exist' " << std::endl;

	std::cout << "----------------- Constructor Copy Test -----------" << std::endl;
	Character luc("New Bob");
	Character you(luc);

	me->use(0, you); // Should print New Bob;

	std::cout << "----------------- Assignation Test --------------" << std::endl;
	Character nyou("Charlie");
	nyou = luc;
	me->use(0, nyou); // Should print New Bob;

	delete bob;
	delete me;
	delete src;

	return 0;
}

// int main()
// {
//     IMateriaSource* src = new MateriaSource();
//     src->learnMateria(new Ice());
//     src->learnMateria(new Cure());

//     ICharacter* me = new Character("me");
//     AMateria* tmp;
//     tmp = src->createMateria("ice");
//     me->equip(tmp);
//     tmp = src->createMateria("cure");
//     me->equip(tmp);

//     ICharacter* bob = new Character("bob");
//     me->use(0, *bob);
//     me->use(1, *bob);

//     delete bob;
//     delete me;
//     delete src;
//     return 0;
// }