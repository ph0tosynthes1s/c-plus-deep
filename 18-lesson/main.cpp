#include <iostream>
#include <string>
 
class Person
{
public:
    Person(std::string p_name)
    {
        name = p_name;
        ++count;
        std::cout << "Person " << name << " created. Count: " << count << std::endl;
    }
    ~Person()
    {
        --count;
        std::cout << "Person " << name << " deleted. Count: " << count << std::endl;
    }
private:
    std::string name;
    static inline unsigned count{};
};
 
int main()
{
    {
        Person tom{"Tom"};
        Person bob{"Bob"};
    }
    Person sam{"Sam"};
}