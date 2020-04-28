#include <iostream>
#include "Pony.hpp"

void ponyOnTheHeap()
{
    Pony *AlbertLePoney = new Pony();

    AlbertLePoney->setName("Albert Le Poney");
    std::cout << "Name of the Poney : " << AlbertLePoney->getName() << std::endl;
}

void ponyOnTheStack()
{
    Pony PhilibertLePoney;

    PhilibertLePoney.setName("PhilibertLePoney");
    std::cout << "Name of the Poney : " << PhilibertLePoney.getName() << std::endl;
}

int main()
{
    std::cout << "----- Pony on the Heap -----" << std::endl;
    ponyOnTheHeap();
    std::cout << "----- Pony on the Stack ----" << std::endl;
    ponyOnTheStack();
    return (0);
}