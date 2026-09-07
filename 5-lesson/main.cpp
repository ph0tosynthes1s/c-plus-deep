#include <iostream>
 
int main()
{   
    int i {1};
    while(i < 10)
    {
        std::cout << i << " * " << i << " = " << i * i << std::endl;
        i++;
    }

    for(int x {1}; x < 10; x++)
    {
        std::cout << x << " * " << x << " = " << x * x << std::endl;
    }

    for (int n : {2, 3, 4, 5})
    {
        std::cout << n << std::endl;
    }

    int y {6};
    do
    {
        std::cout << y << std::endl;
        y--;
    }
    while(y>0);
}