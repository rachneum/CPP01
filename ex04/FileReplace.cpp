#include "FileReplace.hpp"

ReplaceFile::ReplaceFile()
{
    std::cout << "ReplaceFile constructor called." << std::endl;
}

ReplaceFile::ReplaceFile(const std::string& filename, const std::string& s1, const std::string& s2) : _filename(filename), _s1(s1), _s2(s2)
{
    std::cout << "ReplaceFile created for file '" << _filename
              << "' replacing '" << _s1 << "' with '" << _s2 << "'." << std::endl;
}

ReplaceFile::~ReplaceFile()
{
    std::cout << "ReplaceFile destructor called." << std::endl;
}

bool    ReplaceFile::process()
{
    std::ifstream   infile(_filename);
    if (!infile.is_open())
    {
        std::cerr << "Error: cannot open input file.\n";
        return (false);
    }
    std::ofstream   outfile(_filename + ".replace");
    if (!outfile.is_open())
    {
        std::cerr << "Error: cannot open output file.\n";
        return (false);
    }
    std::string line;
    while (std::getline(infile, line))
    {
        std::size_t pos = 0;
        while ((pos = line.find(_s1, pos)) != std::string::npos)
        {
            line = line.substr(0, pos) + _s2 + line.substr(pos + _s1.length());
            pos += _s2.length();
        }
        outfile << line << "\n";
    }
    infile.close();
    outfile.close();
    return (true);
}
