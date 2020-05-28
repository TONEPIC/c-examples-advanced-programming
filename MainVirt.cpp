#include "StudentVirt.h"

void demoFunction1(Person * ptr);
void demoFunction2(Person & ref);

int main()
{
    Person * p = new Student("Jane Smith", 18, "Physics");

    p -> display();

    demoFunction1(p);
    demoFunction2(*p);

    delete p;

    return 0;


}

void demoFunction1(Person * ptr)
{
    ptr -> display();
}

void demoFunction2(Person & ref)
{
    ref.display();
}
