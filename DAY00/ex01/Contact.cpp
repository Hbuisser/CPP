#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

void Contact::setFirstName()
{
    std::string name;

    std::cout << "First name: ";
    std::getline(std::cin, name);
    while (name == "")
    {
        std::cout << "Wrong input" << std::endl;
        std::cout << "First name: ";
        std::getline(std::cin, name);

    }
    m_firstName = name;
}

void Contact::setLastName()
{
    std::string name;

    std::cout << "Last name: ";
    std::getline(std::cin, name);
    while (name == "")
    {
        std::cout << "Wrong input" << std::endl;
        std::cout << "First name: ";
        std::getline(std::cin, name);

    }
    m_lastName = name;
}