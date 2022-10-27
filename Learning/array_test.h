#include <iostream>

void array_test()
{
    int iarr[9];
    std::cout << sizeof(iarr) << "," << sizeof(int) << std::endl;
    double darr[9];
    std::cout << sizeof(darr) << "," << sizeof(double) << std::endl;
    float farr[9];
    std::cout << sizeof(farr) << "," << sizeof(float) << std::endl;
    bool barr[9];
    std::cout << sizeof(barr) << "," << sizeof(bool) << std::endl;
}