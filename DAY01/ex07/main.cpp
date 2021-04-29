#include <iostream>
#include <fstream>

int	error(std::string str)
{
	std::cout << str << std::endl;
	return (1);
}

int main(int argc, char **argv)
{
    if (argc != 4)
		return (error("Error : arguments not valid"));
	std::string fileName = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
    std::ifstream myReadFile(fileName);
    if (!myReadFile)
        return (error("Error : File can't open"));
    fileName += ".replace";
    std::ofstream myCreatedFile(fileName);
    if (!myCreatedFile)
        return (error("Error : File can't be created"));
    char c;
    int i = 0;
    int j = 0;
    std::string read;
    while (myReadFile.get(c))
    {
        i++;
        read += c;
        std::string str = s1;
        str.resize(i);
        if (read != str)
        {
            myCreatedFile << read;
            read.erase();
            i = 0;
        }
        else if (i == s1.size())
        {
            myCreatedFile << s2;
            read.erase();
            i = 0;
        }
    }
    myCreatedFile.close();
    myReadFile.close();
    return (0);
}


// https://www.w3schools.com/cpp/cpp_files.asp
// https://www.geeksforgeeks.org/set-position-with-seekg-in-cpp-language-file-handling/