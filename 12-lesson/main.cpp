#include <iostream>
 
void print(int*, int*);
 
int main()
{
    int nums[] { 1, 2, 3, 4, 5 };
    int *begin {std::begin(nums)};
    int *end {std::end(nums)};
 
    print(begin, end);
}
 
void print(int *begin, int *end)
{
    for (int *ptr {begin}; ptr != end; ptr++)
    {
        std::cout << *ptr << "\t";
    }
}