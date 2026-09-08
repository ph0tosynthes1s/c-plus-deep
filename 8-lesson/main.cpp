#include <iostream>
 
int main()
{
    int number {25};
    int *pnumber {&number}; 
    std::cout << "number addr: " << pnumber << std::endl;
    std::cout << "pnumber addr: " << &pnumber << std::endl;
    std::cout << "number val: " << number << std::endl;
}