#include "contact.hpp"

void add_contact(Contact)
{
    std::cout << "What's the first name ?" << std::endl;
    std::getline(std::cin, first_name);
}

int main()
{
    std::string     cmd;
    //Contact         phoneBook[8];
    PhoneBook       myPhonebook;


    while (1)
    {
        std::cout << "Enter your command: ADD, SEARCH or EXIT\n";
        std::cin >> cmd;
        for (int i = 0; cmd[i] != 0; i++)
            cmd[i] = std::toupper(cmd[i]);
        if (cmd == "ADD")
        {
            myPhonebook.addContact();
        }
    }

    return (0);
}