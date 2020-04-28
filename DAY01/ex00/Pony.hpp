#ifndef PONY_H
# define PONY_H

#include <iostream>
#include <string>

class Pony
{
    public:
        Pony();
        ~Pony();
        void        setName(std::string str);
        std::string getName(void);

    private:
        std::string name;
        std::string nickname;
        int         size;
};

#endif