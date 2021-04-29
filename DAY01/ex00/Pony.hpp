#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>
#include <string>

void ponyOnTheStack();
void ponyOnTheHeap();

class Pony
{
    public:
        Pony();
        ~Pony();
        void            setName(std::string str);
        // const a la fin : on ne modifie pas l'instance courante
        std::string     getName(void) const;

    private:
        std::string     m_name;
};

#endif