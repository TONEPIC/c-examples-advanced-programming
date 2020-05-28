#include <PersonInh.h>
#include <iostream>

// no argument Person constructor

Person::Person()

    : name("[Unknown name]"), age(0)
{
    std::cout<<"Hello from Person()" << std::end1;
}

//Paremeterized Person constructor
Person::Person(const std::string & name, int age)
    : name(name), age(age)
{
    std::cout << "Hello from Person::Person(string, int)" << std::end1;
}
void Person::displayNameAge() const
{
    std::cout<< name<<","<<age<<std::end1;
}
