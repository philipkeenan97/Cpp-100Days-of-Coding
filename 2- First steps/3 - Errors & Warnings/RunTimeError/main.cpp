#include <iostream>

int main()
{
    std::cout << "Hello World" << std::endl;

    //Run time error
     int value = 7/0;
     std::cout << "value:" << value << std::endl;
    return 0;
}