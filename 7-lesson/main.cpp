#include <iostream>
 
int main()
{
    int numbers[4]{1,2,3,4};
    int first = numbers[0];
    std::cout << first << std::endl;
    numbers[0] = 34;
    std::cout << numbers[0] << std::endl;
}