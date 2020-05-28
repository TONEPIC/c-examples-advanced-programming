#include "PersonVirt.h"
    #include <iostream>
    
    
    Person::Person()
            : name("[Unknown name]"), age(0)
    {}
    
    Person::Person(const std::string & Name, int age)
                : name(name), age(age)
    {}
    
    void Person::display() const{

        std::cout << name<<","<<age<<std::endl;
    }
        
    Person::~Person()
    {
        std::cout << "Goodbye from Person Destructor" << std::endl;
    }
    