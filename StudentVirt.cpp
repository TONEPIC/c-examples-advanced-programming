#include "StudentVirt.h"
#include <iostream>
    
    Student::Student()

        : course("[Unassigned course]")
    {}
    Student::Student(const std::string & name, int age, const std::string & course)
                : Person(name,age), course(course)
    {}    
    void Student::display() const
    {
            //call base class version of display, to display related info.
            Person::display();

            //Now display the student related info
            std::cout<< course << std::endl;
    }
    Student::~Student()
    {
        std::cout << "Goodbye from the Student destructor" << std::endl;
    }
    