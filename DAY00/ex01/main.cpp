#include "Contact.hpp"
#include "Phonebook.hpp"

int main()
{
    int             contactNbr = 0;
    std::string     cmd;
    Phonebook       myPhonebook;

    while (1)
    {
        std::cout << "Enter your command: ADD, SEARCH or EXIT\n";
        std::cin >> cmd;
        for (int i = 0; cmd[i] != 0; i++)
            cmd[i] = std::toupper(cmd[i]);
        if (cmd == "ADD")
        {
            if (contactNbr > 7)
                std::cout << "Your Phonebook is full!" << std::endl;
            myPhonebook.createContact(contactNbr);
            contactNbr++;
        }
        else if (cmd == "SEARCH")
        {
            myPhonebook.searchContact(contactNbr);
        }
    }

    return (0);
}