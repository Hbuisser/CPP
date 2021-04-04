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

void Phonebook::createContact()
{
    m_contactNbr++;
    if (m_contactNbr > 7)
    {
        std::cout << "Your Phonebook is full !" << std::endl;
        return ;
    }
    m_contacts[m_contactNbr].setFirstName();
    m_contacts[m_contactNbr].setLastName();
    m_contacts[m_contactNbr].setNickname();
    m_contacts[m_contactNbr].setLogin();
    m_contacts[m_contactNbr].setPostalAddress();
    m_contacts[m_contactNbr].setEmail();
    m_contacts[m_contactNbr].setPhoneNumber();
    m_contacts[m_contactNbr].setBirthday();
    m_contacts[m_contactNbr].setFavoriteMeal();
    m_contacts[m_contactNbr].setUnderwearColor();
    m_contacts[m_contactNbr].setDarkestSecret();
}

void Phonebook::showContacts()
{
    int i = 0;

    std::cout << "Enter your contact number : " << std::endl;
    while (i <= m_contactNbr)
    {
        std::cout << i + 1 << "| ";
        std::cout << m_contacts[i].getFirstName() << " ";
        std::cout << m_contacts[i].getLastName() << std::endl;
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

bool Phonebook::isNumeric(std::string str) 
{
   for (unsigned long i = 0; i < str.length(); i++)
      if (isdigit(str[i]) == false)
         return false;
      return true;
}

void Phonebook::searchContact()
{
    std::string     inputUser;

    if (m_contactNbr == -1)
    {
        std::cout << "No contacts" << std::endl;
        return ;
    }
    this->showContacts();
    std::getline(std::cin, inputUser);
    while (inputUser == "" || !isNumeric(inputUser))
    {
        std::cout << "Wrong input" << std::endl;
        std::cout << "Desired contact index: ";
        std::getline(std::cin, inputUser);
    }
    this->showContact(std::stoi(inputUser));
}
