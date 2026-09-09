#include <iostream>
 
void increment(int*);
 
int main()
{
    int n {10};
    increment(&n);
    std::cout << "main function: " << n << std::endl;
}
void increment(int *x)
{
    (*x)++;
    std::cout << "increment function: " << *x << std::endl;
}