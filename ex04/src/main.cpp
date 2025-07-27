#include "Header.hpp"

int main(int argc, char **argv)
{
    if (argc != 4)
     {
        std::cerr << "bad number of arguments" << std::endl;
        return 1;
     }
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::ifstream infile(filename.c_str());
    if (!infile)
    {
        std::cerr << "could not open infile: " << filename << std::endl;
        return 1;
    }
    else
    {
        std::string new_file = filename;
        new_file+= ".replace";
        std::ofstream outfile (new_file.c_str(), std::ios::app);
        if (!outfile)
        {
            std::cerr << "could not created outfile: " << new_file << std::endl;
            return (1); 
        }
    }
    std::string line;
    size_t pos = 0;
    size_t start = 0;
    while (getline(infile, line))
    {
        if (line.empty())
            break;
        while ((pos = line.find(s1, pos)) != std::string::npos)
        {
            

        }
    }
    return 0;
}