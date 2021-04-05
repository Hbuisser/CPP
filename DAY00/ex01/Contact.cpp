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
    std::cin.ignore();
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
        std::cout << "Last name: ";
        std::getline(std::cin, name);
    }
    m_lastName = name;
}

void Contact::setNickname()
{
    std::string name;

    std::cout << "Nickname: ";
    std::getline(std::cin, name);
    while (name == "")
    {
        std::cout << "Wrong input" << std::endl;
        std::cout << "Nickname: ";
        std::getline(std::cin, name);
    }
    m_nickname = name;
}

void Contact::setLogin()
{
    std::string name;

    std::cout << "Login: ";
    std::getline(std::cin, name);
    while (name == "")
    {
        std::cout << "Wrong input" << std::endl;
        std::cout << "Login: ";
        std::getline(std::cin, name);
    }
    m_login = name;
}

void Contact::setPostalAddress()
{
    std::string name;

    std::cout << "Postal Address: ";
    std::getline(std::cin, name);
    while (name == "")
    {
        std::cout << "Wrong input" << std::endl;
        std::cout << "Postal Address: ";
        std::getline(std::cin, name);
    }
    m_postalAddress = name;
}

bool Contact::is_email(std::string str)
{
    unsigned long i = 0;

    while (i < str.length())
    {
        if (str[i] == '@')
            return (true);
        i++;
    }
    return (false);
}

void Contact::setEmail()
{
    std::string name;

    std::cout << "Email: ";
    std::getline(std::cin, name);
    while (name == "" || !is_email(name))
    {
        std::cout << "Wrong input" << std::endl;
        std::cout << "Email: ";
        std::getline(std::cin, name);
    }
    m_email = name;
}

void Contact::setPhoneNumber()
{
    std::string name;

    std::cout << "Phone number: ";
    std::getline(std::cin, name);
    while (name == "")
    {
        std::cout << "Wrong input" << std::endl;
        std::cout << "Phone number: ";
        std::getline(std::cin, name);
    }
    m_phoneNumber = name;
}

void Contact::setBirthday()
{
    std::string name;

    std::cout << "Birthday: ";
    std::getline(std::cin, name);
    while (name == "")
    {
        std::cout << "Wrong input" << std::endl;
        std::cout << "Birthday: ";
        std::getline(std::cin, name);
    }
    m_birthday = name;
}

void Contact::setFavoriteMeal()
{
    std::string name;

    std::cout << "Favorite meal: ";
    std::getline(std::cin, name);
    while (name == "")
    {
        std::cout << "Wrong input" << std::endl;
        std::cout << "Favorite meal: ";
        std::getline(std::cin, name);
    }
    m_favoriteMeal = name;
}

void Contact::setUnderwearColor()
{
    std::string name;

    std::cout << "Underwear color: ";
    std::getline(std::cin, name);
    while (name == "")
    {
        std::cout << "Wrong input" << std::endl;
        std::cout << "Underwear color: ";
        std::getline(std::cin, name);
    }
    m_underwearColor = name;
}

void Contact::setDarkestSecret()
{
    std::string name;

    std::cout << "Darkest secret: ";
    std::getline(std::cin, name);
    while (name == "")
    {
        std::cout << "Wrong input" << std::endl;
        std::cout << "Darkest secret: ";
        std::getline(std::cin, name);
    }
    m_darkestSecret = name;
}

std::string Contact::getFirstName() const { return m_firstName; }
std::string Contact::getLastName() const { return m_lastName; }
std::string Contact::getNickname() const { return m_nickname; }
std::string Contact::getLogin() const { return m_login; }
std::string Contact::getPostalAddress() const { return m_postalAddress; }
std::string Contact::getEmail() const { return m_email; }
std::string Contact::getPhoneNumber() const { return m_phoneNumber; }
std::string Contact::getBirthday() const { return m_birthday; }
std::string Contact::getFavoriteMeal() const { return m_favoriteMeal; }
std::string Contact::getUnderwearColor() const { return m_underwearColor; }
std::string Contact::getDarkestSecret() const { return m_darkestSecret; }

std::string Contact::getFirstNameFormatted()
{
    std::string name = m_firstName;

    if (name.size() > 10)
        name[9] = '.';
    return name.substr(0, 10);
}

std::string Contact::getLastNameFormatted()
{
    std::string name = m_lastName;

    if (name.size() > 10)
        name[9] = '.';
    return name.substr(0, 10);
}

std::string Contact::getNicknameFormatted()
{
    std::string name = m_nickname;

    if (name.size() > 10)
        name[9] = '.';
    return name.substr(0, 10);
}