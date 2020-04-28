#include <iostream>
#include "Pony.hpp"

Pony::~Pony()
{
}

Pony::Pony()
{
    this->name = "";
    this->nickname = "";
    this->size = 0;
}

void Pony::setName(std::string str)
{
    this->name = str;
}

std::string Pony::getName(void)
{
    return (this->name);
}