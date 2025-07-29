#include "FileReplace.hpp"

int main(int argc, char** argv)
{
    if (argc != 4)
    {
        std::cerr << "Error: Try with the right format: ./program <file> s1 s2" << std::endl;
        return (1);
    }
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    if (s1.empty())
    {
        std::cerr << "Error: s1 cannot be empty." << std::endl;
        return (1);
    }
    ReplaceFile replace(filename, s1, s2);
    if (!replace.process())
    {
        std::cerr << "An error occurred during processing." << std::endl;
        return (1);
    }
    return (0);
}
