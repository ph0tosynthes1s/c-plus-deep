#include <iostream>
 
void sum(int, int);
 
int main()
{
    const int n1{3};
    const int n2{4};
    sum(n1, n2);
 
    const double d1{3.3};
    const double d2{4.4};
    sum(d1, d2);
}
 
void sum(int a, int b)
{
    auto result = a + b;
    std::cout << a << " + " << b << " = " << result << std::endl;
}