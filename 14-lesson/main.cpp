#include <iostream>
#include <string>
 
class Person 
{
public:
    std::string name;
    unsigned age;
    void print() 
    {
        std::cout << "Name: " << name << "\tAge: " << age << std::endl;
    }
};
int main()
{
    Person person;
    person.name = "Bob";
    person.age = 42;
    std::string username = person.name;
    unsigned userage = person.age;
    std::cout << "Name: " << username << "\tAge: " << userage << std::endl;
}