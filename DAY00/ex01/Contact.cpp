#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

int Contact::setFirstName()
{
    std::string name;

    std::cout << "First name: ";
    if (!(std::getline(std::cin, name)))
        return 0;
    while (name == "")
    {
        std::cout << "Wrong input" << std::endl;
        std::cout << "First name: ";
        if (!(std::getline(std::cin, name)))
            return 0;
    }
    m_firstName = name;
    return 1;
}

int Contact::setLastName()
{
    std::string name;

    std::cout << "Last name: ";
    if (!(std::getline(std::cin, name)))
        return 0;
    while (name == "")
    {
        std::cout << "Wrong input" << std::endl;
        std::cout << "Last name: ";
        if (!(std::getline(std::cin, name)))
            return 0;
    }
    m_lastName = name;
    return 1;
}

int Contact::setNickname()
{
    std::string name;

    std::cout << "Nickname: ";
    if (!(std::getline(std::cin, name)))
        return 0;
    while (name == "")
    {
        std::cout << "Wrong input" << std::endl;
        std::cout << "Nickname: ";
        if (!(std::getline(std::cin, name)))
            return 0;
    }
    m_nickname = name;
    return 1;
}

int Contact::setLogin()
{
    std::string name;

    std::cout << "Login: ";
    if (!(std::getline(std::cin, name)))
        return 0;
    while (name == "")
    {
        std::cout << "Wrong input" << std::endl;
        std::cout << "Login: ";
        if (!(std::getline(std::cin, name)))
            return 0;
    }
    m_login = name;
    return 1;
}

int Contact::setPostalAddress()
{
    std::string name;

    std::cout << "Postal Address: ";
    if (!(std::getline(std::cin, name)))
        return 0;
    while (name == "")
    {
        std::cout << "Wrong input" << std::endl;
        std::cout << "Postal Address: ";
        if (!(std::getline(std::cin, name)))
            return 0;
    }
    m_postalAddress = name;
    return 1;
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

int Contact::setEmail()
{
    std::string name;

    std::cout << "Email: ";
    if (!(std::getline(std::cin, name)))
        return 0;
    while (name == "" || !is_email(name))
    {
        std::cout << "Wrong input" << std::endl;
        std::cout << "Email: ";
        if (!(std::getline(std::cin, name)))
            return 0;
    }
    m_email = name;
    return 1;
}

int Contact::setPhoneNumber()
{
    std::string name;

    std::cout << "Phone number: ";
    if (!(std::getline(std::cin, name)))
        return 0;
    while (name == "")
    {
        std::cout << "Wrong input" << std::endl;
        std::cout << "Phone number: ";
        if (!(std::getline(std::cin, name)))
            return 0;
    }
    m_phoneNumber = name;
    return 1;
}

int Contact::setBirthday()
{
    std::string name;

    std::cout << "Birthday: ";
    if (!(std::getline(std::cin, name)))
        return 0;
    while (name == "")
    {
        std::cout << "Wrong input" << std::endl;
        std::cout << "Birthday: ";
        if (!(std::getline(std::cin, name)))
            return 0;
    }
    m_birthday = name;
    return 1;
}

int Contact::setFavoriteMeal()
{
    std::string name;

    std::cout << "Favorite meal: ";
    if (!(std::getline(std::cin, name)))
        return 0;
    while (name == "")
    {
        std::cout << "Wrong input" << std::endl;
        std::cout << "Favorite meal: ";
        if (!(std::getline(std::cin, name)))
            return 0;
    }
    m_favoriteMeal = name;
    return 1;
}

int Contact::setUnderwearColor()
{
    std::string name;

    std::cout << "Underwear color: ";
    if (!(std::getline(std::cin, name)))
        return 0;
    while (name == "")
    {
        std::cout << "Wrong input" << std::endl;
        std::cout << "Underwear color: ";
        if (!(std::getline(std::cin, name)))
            return 0;
    }
    m_underwearColor = name;
    return 1;
}

int Contact::setDarkestSecret()
{
    std::string name;

    std::cout << "Darkest secret: ";
    if (!(std::getline(std::cin, name)))
        return 0;
    while (name == "")
    {
        std::cout << "Wrong input" << std::endl;
        std::cout << "Darkest secret: ";
        if (!(std::getline(std::cin, name)))
            return 0;
    }
    m_darkestSecret = name;
    return 1;
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