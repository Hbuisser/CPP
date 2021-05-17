#include <iostream>
#include <sstream>
#include <string>
#include <time.h>
#include <stdlib.h>

typedef struct Data
{
	std::string s1;
	int n;
	std::string s2;
}               Data;

void	show_data(Data *data)
{
	std::cout << "Pre-serialize: " << data->s1 << ", " << data->n << ", " << data->s2 << std::endl;
}

std::string createString()
{
    static char str[9];

    for (int i = 0; i < 8; i++)
        str[i] = "0123456789abcdefghijklmnopqrstuvwxyz"[rand() % 36];
    return (static_cast<std::string>(str));
}

void *serialize(void)
{
    Data *raw;
    raw = new Data;

    raw->s1 = createString();
    raw->n = rand();
    raw->s2 = createString();
    show_data(raw);
    return (static_cast<void *>(raw));
}

// reinterpret_cast guarantees that if you cast a pointer to a different type, 
// and then reinterpret_cast it back to the original type, you get the original value
Data *deserialize(void *raw)
{
    return (reinterpret_cast<Data *>(raw));
}

int main()
{
    // initialize random seed
    srand(time(NULL));
    void *raw = serialize();
    std::cout << raw << std::endl;
    Data *data = deserialize(raw);
    show_data(data);
    delete data;
    return (0);
}