#include<iostream>
#include<string>

struct student
{
    int age;
    std::string name;
};


int main(void)
{
    student s = {1, "Tom"};
    int old_v = s.age;
    int new_v = 12;
    s.age = 12;
    if (s.age != old_v)
    {
        std::cout << "age changed." << std::endl;
    }
}
