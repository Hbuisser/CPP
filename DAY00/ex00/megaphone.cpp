#include <cctype>
#include <cstring>
#include <iostream>
#include <cstdio>

int main(int argc, char **argv)
{
    int i;
    int j = 1;
    int k = 0;
    char *str;

    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
        return (0);
    }
    else
    {
        while (argv[j] != NULL)
        {
            str = argv[j];
            for (i=0; i < (int)strlen(argv[j]); i++)
            {
                str[k] = toupper(argv[j][i]);
                k++;
            }
            std::cout << str;
            k = 0;
            j++;
        }
        std::cout << "\n";
        return (0);
    }
}