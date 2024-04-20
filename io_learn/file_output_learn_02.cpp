#include <iostream>
#include <fstream>

int main(){
    // Open a file for writing
    std::ofstream outfile;
    outfile.open("output.txt", std::ios::out &~std::ios::trunc);
    std::cout <<  std::hex << "std::ios::out "<< static_cast<long>(std::ios::out) << std::endl;
    std::cout <<  std::hex << "std::ios::trunc "<< static_cast<long>(std::ios::trunc) << std::endl;
    std::cout <<  std::hex << "std::ios::out | std::ios::trunc"<< static_cast<long>(std::ios::out | std::ios::trunc) << std::endl;
    // Check if the file was opened successfully
    if (!outfile.is_open())
    {
        std::cout << "File failed to open!" << std::endl;
        return -1;
    }
    // write to the file
    std::string message = "Hello, world!";
    // outfile << message << std::endl;
    // outfile.write(message.c_str(), message.size());
    outfile.put(message.c_str()[0]);
    // close the file
    outfile.close();
    return 0;
}