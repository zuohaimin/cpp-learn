#include <fstream>
#include <iostream>
int main(int argc, char const *argv[])
{
    std::string filename = "output.txt";
    // std::basic_ifstream<char, std::char_traits<char>> finstream(filename.c_str());
    std::ifstream fin;
    fin.open(filename, std::ios::in|std::ios::binary);
    if (!fin.is_open()){
        std::cerr << "Error: Failed to open file " << filename << std::endl;        
        return 1;
    }
    std::string str;
    std::string name;
    int age;
    char gender;
    while (fin >> name >> age >> gender){
        std::cout << name << " " << age << " " << gender << std::endl;
    }
    // while (finstream >> str)
    // {
    //     std::cout << str << std::endl;
    // }
    // while (std::getline(fin, str))
    // {
    //     std::cout << str << std::endl;
    // }
    std::cout << "File opened successfully." << std::endl;
    fin.close();
    char a, b;
    std::cin >> a >> b;
    std::cout << "a = " << a << " b = " << b << std::endl;
    return 0;
}

