#include <sstream>

void sstream_test()
{
    int first, second;
    std::stringstream ss;

    ss << "hello";
    ss >> first;

    std::cout << first << std::endl;
}