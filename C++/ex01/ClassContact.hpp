#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <iomanip>
# include <string>

class Contact
{
    private:
        //int         index;
        int         amount;
        std::string FirstName;
        std::string LastName;
        std::string Nickname;
        std::string Login;
        std::string Address;
        std::string Email;
        std::string Phone;
        std::string Birthday;
        std::string Favorite;
        std::string Meal;
        std::string UnderwearColor;
        std::string DarkestSecret;
    public:
        Contact();
        // void        set_info(std::string input, int i);
        // void        add_contact(void);
        // int         search_contact(int i);
        // std::string check_data(void);
        
};

#endif