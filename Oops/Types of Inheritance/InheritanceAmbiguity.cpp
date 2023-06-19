/*
There may be a possibility that a class may inherit member functions with the same name from two or more base classes, and the derived class may not have functions with the same name as those of its base classes. If the derived class object needs to access one of the same-named member functions of the base classes, it results in ambiguity as it is not clear to the compiler which base’s class member function should be invoked. 
*/



// example of the problem
/*
#include<iostream>
using namespace std;

class A {
    public:
        void abc() {
            cout << "Class A";
        }
};

class B {
    public:
        void abc() {
            cout << "Class B";
        }
};

class C: public A, public B {
    public:
};


//Main Code
int main() {
    C obj;
    obj.abc();
}
*/

#include<iostream>
using namespace std;

class A {
    public:
        void abc() {
            cout << "Class A";
        }
};

class B {
    public:
        void abc() {
            cout << "Class B";
        }
};

class C: public A, public B {
    public:
};

//Main Code
int main() {
    C obj;
    obj.A :: abc();   
    // solution to this problem is the use of the scope 
    // resolution operator for explicitly referring the the function class
}