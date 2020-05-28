#include "StudentInh.h"

int main()
{
    //create a Student object using the no-argument constructor
    Student Student1;
    Student1.displayNameAge();
    Student1.displayCourse();


    //create a Student object using the parameterized constructor
    Student Student2("Jane Smith", 18, "Physics");
    Student2.displayNameAge();
    Student2.displayCourse();

    return 0;
}