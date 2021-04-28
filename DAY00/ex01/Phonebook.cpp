#include "Phonebook.hpp"
#include "Contact.hpp"

Phonebook::Phonebook()
{
    m_contactNbr = -1;
}

Phonebook::~Phonebook()
{
    /* Rien à mettre ici car on ne fait pas d'allocation dynamique
    dans la classe Contact. Le destructeur est donc inutile.
    En temps normal, un destructeur fait souvent des delete et quelques
    autres vérifications si nécessaire avant la destruction de l'objet. */
}

int Phonebook::createContact()
{
    m_contactNbr++;
    if (m_contactNbr > 7)
    {
        std::cout << "Your Phonebook is full !" << std::endl;
        return 1;
    }
    try
    {
        if (m_contacts[m_contactNbr].setFirstName() == 0)
            return 0;
        if (m_contacts[m_contactNbr].setLastName() == 0)
            return 0;
        if (m_contacts[m_contactNbr].setNickname() == 0)
            return 0;
        if (m_contacts[m_contactNbr].setLogin() == 0)
            return 0;
        if (m_contacts[m_contactNbr].setPostalAddress() == 0)
            return 0;
        if (m_contacts[m_contactNbr].setEmail() == 0)
            return 0;
        if (m_contacts[m_contactNbr].setPhoneNumber() == 0)
            return 0;
        if (m_contacts[m_contactNbr].setBirthday() == 0)
            return 0;
        if (m_contacts[m_contactNbr].setFavoriteMeal() == 0)
            return 0;
        if (m_contacts[m_contactNbr].setUnderwearColor() == 0)
            return 0;
        if (m_contacts[m_contactNbr].setDarkestSecret() == 0)
            return 0;
    }
    catch (std::exception const& e)
    {
        std::cerr << "Goodbye " << std::endl;
        return 0;
    }
    return 1;
}

void Phonebook::showContacts()
{
    int i = 0;

    while (i <= m_contactNbr)
    {
        std::cout << i + 1 << "|";
        std::cout << std::setw(10) << m_contacts[i].getFirstNameFormatted() << "|";
        std::cout << std::setw(10) << m_contacts[i].getLastNameFormatted() << "|";
        std::cout << std::setw(10) << m_contacts[i].getNicknameFormatted() << "|" << std::endl;
        i++;
    }
}

void Phonebook::showContact(int inputUser)
{
    if (m_contactNbr < inputUser - 1)
    {
        std::cout << "This contact doesn't exist" << std::endl;
        return ;
    }
    std::cout << "First name : " << m_contacts[inputUser - 1].getFirstName() << std::endl;
    std::cout << "Last name : " << m_contacts[inputUser - 1].getLastName() << std::endl;
    std::cout << "Nickname : " << m_contacts[inputUser - 1].getNickname() << std::endl;
    std::cout << "Login : " << m_contacts[inputUser - 1].getLogin() << std::endl;
    std::cout << "Postal address : " << m_contacts[inputUser - 1].getPostalAddress() << std::endl;
    std::cout << "Email : " << m_contacts[inputUser - 1].getEmail() << std::endl;
    std::cout << "Phone number : " << m_contacts[inputUser - 1].getPhoneNumber() << std::endl;
    std::cout << "Phone number : " << m_contacts[inputUser - 1].getBirthday() << std::endl;
    std::cout << "Favorite meal : " << m_contacts[inputUser - 1].getFavoriteMeal() << std::endl;
    std::cout << "Underwear color : " << m_contacts[inputUser - 1].getUnderwearColor() << std::endl;
    std::cout << "Darkest secret : " << m_contacts[inputUser - 1].getDarkestSecret() << std::endl;
}

bool Phonebook::isNoNumeric(std::string str) 
{
    for (unsigned long i = 0; i < str.length(); i++)
        if (!isdigit(str[i]))
            return true;
        return false;
}

int Phonebook::searchContact()
{
    int             index = 0;
    std::string     cmd;

    if (m_contactNbr == -1)
        std::cout << "No contacts in your Phonebook, add one or exit!" << std::endl;
    else
    {
        std::cout << "Enter your contact number : " << std::endl;
        this->showContacts();
        if (!(std::getline(std::cin, cmd)))
            return 0;
        while (index == 0)
        {
            try
            {
                std::stoi(cmd);
                index = 1;
            }
            catch(std::exception const& e)
            {
                std::cerr << "Invalid number, try again : " << std::endl;
                this->showContacts();
                if (!(std::getline(std::cin, cmd)))
                    return 0;
            }
        }
        while (!(std::stoi(cmd)) || (std::stoi(cmd) <= 0 || std::stoi(cmd) > this->m_contactNbr + 1 || isNoNumeric(cmd)))
        {
            index = 0;
            std::cout << "Invalid number, try again :" << std::endl;
            this->showContacts();
            if (!(std::getline(std::cin, cmd)))
                return 0;
            while (index == 0)
            {
                try
                {
                    std::stoi(cmd);
                    index = 1;
                }
                catch(std::exception const& e)
                {
                    std::cerr << "Invalid number, try again : " << std::endl;
                    this->showContacts();
                    if (!(std::getline(std::cin, cmd)))
                        return 0;
                }
            }
        }
        if (std::stoi(cmd) > 0)
            this->showContact(std::stoi(cmd));
    }
    return 1;
}
