// 发送邮件
#include <iostream>
#include <string>
#include <sstream>   

int main(int argc, char const *argv[])
{
    // 编码字符串

    std::string str = "你好";
    // 字符串输入流
    std::istringstream iss(str, std::ios::binary); 
    // 输出一个字节
    std::uint8_t c;
    size_t count = 0;
    while (iss >> c) {
        // std::cout << (c & 0xff) << std::endl; 
        std::cout <<std::hex << static_cast<short int>(c) << std::endl; 
        count++;
    }
    std::cout << "count: " << count  << std::endl;
    return 0;
}