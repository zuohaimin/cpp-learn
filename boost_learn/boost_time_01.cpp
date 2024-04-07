 #include<iostream>
 #include<boost/date_time.hpp>

 int main(int argc, char const *argv[])
 {
    // 获取当前时间戳
    boost::posix_time::ptime now = boost::posix_time::second_clock::local_time();

    // 格式化时间戳为字符串
    std::string formatted_time = boost::posix_time::to_simple_string(now);

    // 打印格式化后的时间戳字符串
    std::cout << "Formatted timestamp: " << formatted_time << std::endl;

     // 创建一个时间戳表示的时间点
    boost::posix_time::ptime time_from_timestamp(boost::posix_time::from_time_t(16177680000000)); // 时间戳：1617768000（2021-04-07 12:00:00 UTC）

    // 输出时间点
    std::cout << "时间点：" << time_from_timestamp << std::endl;
 }
