#include <iostream>
 
int main()
{
    int number {5};
    int &refNumber {number};
    std::cout << refNumber << std::endl; // 5
    refNumber = 20;
    std::cout << number << std::endl;   // 20
}