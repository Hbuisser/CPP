#include <iostream>
#include "Pony.hpp"

void ponyOnTheHeap()
{
    Pony *heapPoney = new Pony();

    heapPoney->setName("Heapponey");
    std::cout << "Name of the Poney : " << heapPoney->getName() << std::endl;
    delete heapPoney;
}

void ponyOnTheStack()
{
    Pony stackPoney;

    stackPoney.setName("Stackponey");
    std::cout << "Name of the Poney : " << stackPoney.getName() << std::endl;
}

int main()
{
    std::cout << "----- Pony on the Heap -----" << std::endl;
    ponyOnTheHeap();
    std::cout << "----- Pony on the Stack ----" << std::endl;
    ponyOnTheStack();
    return (0);
}