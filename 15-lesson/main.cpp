#include <iostream>
#include <string>
 
class Person 
{
    std::string name{};
    unsigned age{};
public:
    void print() 
    {
        std::cout << "Name: " << name << "\tAge: " << age << std::endl;
    }
    Person(std::string p_name, unsigned p_age)
    {
        name = p_name;
        age = p_age;
    }
    Person(std::string p_name)
    {
        name = p_name;
        age = 18;
    }
    Person()
    {
        name = "Undefined";
        age = 18;
    }
};
int main()
{
    Person tom{"Tom", 38};
    Person bob{"Bob"};
    Person sam;
    tom.print();
    bob.print();
    sam.print();
}