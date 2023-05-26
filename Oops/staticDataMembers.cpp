/*
Static data members are class members that are declared using static keywords. A static member has certain special characteristics which are as follows:

1. Only one copy of that member is created for the entire class and is shared by all the objects of that class, no matter how many objects are created.
2. It is initialized before any object of this class is created, even before the main starts.
3. It is visible only within the class, but its lifetime is the entire program.

Syntax:

static data_type data_member_name;


*/

#include <iostream>
using namespace std;
 
class A {
public:
    A()
    {
      cout << "A's Constructor Called " <<
               endl;
    }
};
 
class B {
    static A a;
 
public:
    B()
    {
      cout << "B's Constructor Called " <<
               endl;
    }
};
 
// Driver code
int main()
{
    B b;
    return 0;
}
