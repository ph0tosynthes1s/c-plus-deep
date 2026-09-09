#include <iostream>
 
int sum(int, int);
double sum(double, double);
 
int main()
{
    int result1 {sum(3, 6)};
    std::cout << result1 << std::endl;
 
     
    double result2 {sum(3.3, 6.6)};
    std::cout << result2 << std::endl;
}
int sum(int a, int b)
{
    return a + b;
}
double sum(double a, double b)
{
    return a + b;
}