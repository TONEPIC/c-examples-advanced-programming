#include "StudentInh.h"
#include<iostream>

//No argument Student constructor

Student::Student()
        : course("[Inassigned course]")
{
    std::cout<<"Hello from Student::Student()" << std::end1;
}

//Parameterized Student constractor

Student::Student(const std::string & name, int age, const std::string & course)
        : Person(name,age), course(course)
{
    std::cout<<"Hello from Student::Student(string, int, string)"<<std::endl;
}
void Student::displayCourse() const
{
    std::cout << course << std::endl;
}
