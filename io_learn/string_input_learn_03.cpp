#include <iostream>
#include <sstream>
int main(int argc, char const *argv[])
{
    std::ostringstream oss;    
    oss << "Hello, world!" << std::endl;
    std::cout << oss.str();
    // std::cout << oss.view() << std::endl;

    return 0;
}
