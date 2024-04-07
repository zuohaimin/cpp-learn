#include<boost/format.hpp>
#include<iostream>
#if 0
int main(int argc, char const *argv[]) {
    boost::format bf_01;
    bf_01 = boost::format("hello %1$e %2% %3% %4%");
    bf_01 % "boost" % "format" % "world" % "!";
    std::cout << bf_01 << std::endl;
    bf_01 % "增强" % "格式化" % "世界" % "!";
    std::cout << bf_01 << std::endl;
    std::string str = "测试";
    bf_01 % str % str % str % "!";
    std::cout << bf_01 << std::endl;
    bf_01 % 1111 % 1111 % 1111 % "!";
    std::cout << bf_01 << std::endl;
    return 0;
}
#endif
