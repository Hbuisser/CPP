#include <iostream>
#include <time.h>

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

Base *generate(void)
{  
    int i;
    srand(time(NULL));
    
    i = rand() % 3;
    if (i == 1)
        return (new A());
    else if (i == 2)
        return (new B());
    else
        return (new C());
}

void identify_from_pointer(Base *p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "From pointer : Type A" << std::endl;
	if (dynamic_cast<B *>(p))
		std::cout << "From pointer : Type B" << std::endl;
	if (dynamic_cast<C *>(p))
		std::cout << "From pointer : Type C" << std::endl;
}

void identify_from_reference(Base &p)
{
    if (dynamic_cast<A*>(&p) != nullptr)
        std::cout << "From reference : Type A" << std::endl;
    else if (dynamic_cast<B*>(&p) != nullptr)
        std::cout << "From reference : Type B" << std::endl;
    else if (dynamic_cast<C*>(&p) != nullptr)
        std::cout << "From reference : Type C" << std::endl;
}

int main()
{
    Base *base;

    base = generate();
    identify_from_pointer(base);
    identify_from_reference(*base);
    delete base;
}