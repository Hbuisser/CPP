#include "Phonebook.hpp"
#include "Contact.hpp"

Phonebook::Phonebook()
{
}

Phonebook::~Phonebook()
{
    /* Rien à mettre ici car on ne fait pas d'allocation dynamique
    dans la classe Contact. Le destructeur est donc inutile.
    En temps normal, un destructeur fait souvent des delete et quelques
    autres vérifications si nécessaire avant la destruction de l'objet. */
}

void Phonebook::createContact(int contactNbr)
{
    m_contacts[contactNbr].setFirstName();
    m_contacts[contactNbr].setLastName();
}

void Phonebook::searchContact(int contactNbr)
{
    //m_contacts[contactNbr].
}

