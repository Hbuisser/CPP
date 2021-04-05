#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>
#include <string>

void ponyOnTheStack();
void ponyOnTheHeap();

class Pony
{
    private:
        std::string     m_name;

    public:
        Pony();
        ~Pony();

        void            setName(std::string str);
        std::string     getName(void);
};

#endif