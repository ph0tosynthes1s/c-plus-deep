#include <iostream> 
 
int main()
{
    int n {21};
    if (n > 22)
    {
        std::cout << "n > 22" << std::endl;
    }
    else if (n < 22)
    {
        std::cout << "n < 22" << std::endl;
    }
    else
    {
        std::cout << "n == 22" << std::endl;
    }
}