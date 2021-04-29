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
    this->m_name = str;
}

std::string Pony::getName() const
{
    return (this->m_name);
}