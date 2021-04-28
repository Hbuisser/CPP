#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include <limits>
# include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <exception>

#include "Contact.hpp"

// Les variables sont appelées =====attributs et les fonctions sont appelées ======méthodes.
// Un objet est une ====instance d'une classe
// Une classe, plusieurs meme object de la meme classe
// struct au lieu de class => meme chose mais tout est public au lieu de prive

class Phonebook
{
    private:
        // Le « m » signifiant « membre »
        // Il est impossible d'initialiser les attributs ici (sauf les classes). Cela doit être fait via un constructeur
        Contact     m_contacts[8];
        int         m_contactNbr;
    
    public:
        Phonebook();
        ~Phonebook();
        int createContact();
        int searchContact();
        void showContacts();
        void showContact(int inputUser);
        bool isNoNumeric(std::string str);
};

#endif