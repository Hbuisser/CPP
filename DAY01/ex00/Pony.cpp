#include <iostream>
#include "Pony.hpp"

Pony::Pony()
{
    m_name = "";
}

Pony::~Pony()
{
}

void Pony::setName(std::string str)
{
    m_name = str;
}

std::string Pony::getName()
{
    return (m_name);
}