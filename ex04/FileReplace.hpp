#ifndef REPLACEFILE_HPP
# define REPLACEFILE_HPP

# include <string>
# include <iostream>
# include <fstream>//Por ifstream(), ofstream();

class   ReplaceFile
{
    private:
        std::string _filename;
        std::string _s1;
        std::string _s2;

    public:
        ReplaceFile();
        ReplaceFile(const std::string& filename, const std::string& s1, const std::string& s2);
        ~ReplaceFile();
        bool    process();
};

#endif
