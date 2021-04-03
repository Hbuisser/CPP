#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include <limits>

// Les variables sont appelées =====attributs et les fonctions sont appelées ======méthodes.
// Un objet est une ====instance d'une classe
// Une classe, plusieurs meme object de la meme classe
// struct au lieu de class => meme chose mais tout est public au lieu de prive

class Phonebook
{
    public:
        Phonebook();
        ~Phonebook();
        addContact();
    
    private:
        // Le « m » signifiant « membre »
        // Il est impossible d'initialiser les attributs ici (sauf les classes). Cela doit être fait via un constructeur
        int         m_nbrContact;
        Contact     m_contact;
};

#endif