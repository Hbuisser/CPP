#include "Contact.hpp"
#include "Phonebook.hpp"

int main()
{
    std::string     cmd;
    Phonebook       myPhonebook;
    int             status = 1;

    while (status == 1)
    {
        std::cout << "Enter your command: ADD, SEARCH or EXIT" << std::endl;
        if (!(std::getline(std::cin, cmd)))
            return 0;
        for (int i = 0; cmd[i] != 0; i++)
            cmd[i] = std::toupper(cmd[i]);
        if (cmd == "ADD")
            status = myPhonebook.createContact();
        else if (cmd == "SEARCH")
            status = myPhonebook.searchContact();
        else if (cmd == "EXIT")
        {
            std::cout << "Goodbye!" << std::endl;
            status = 0;
        }
        else
            std::cout << "This is not a valid command, try again" << std::endl;
    }
    return (0);
}