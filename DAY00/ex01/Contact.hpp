#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include <limits>


class Contact
{
    public:
        Contact();
        ~Contact();
        void            setFirstName();
        void            setLastName();
    
    private:
        std::string     m_firstName;
        std::string     m_lastName;
        std::string     m_nickname;
        std::string     m_login;
        std::string     m_postalAddress;
        std::string     m_email;
        std::string     m_phoneNumber;
        std::string     m_birthday;
        std::string     m_favoriteMeal;
        std::string     m_underwearColor;
        std::string     m_darkestSecret;
};

#endif