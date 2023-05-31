/*
Types of constructor

    • Default constructor
    • Parameterized constructor
    • Overloaded constructor
    • Constructor with default value
    • Copy constructor
    • Inline constructor

A constructor is different from normal functions in following ways: 

Constructor has same name as the class itself
Default Constructors don’t have input argument however, Copy and Parameterized Constructors have input arguments
Constructors don’t have return type
A constructor is automatically called when an object is created.
It must be placed in public section of class.
If we do not specify a constructor, C++ compiler generates a default constructor for object
*/


//1. Default Constructors: Default constructor is the constructor which doesn’t take any argument. It has no parameters. It is also called a zero-argument constructor.

#include <iostream>
using namespace std;
 
class construct {
public:
    int a, b;
 
    // Default Constructor
    construct()
    {
        a = 10;
        b = 20;
        //cout << "a: " << a << endl << "b: " << b;     can print here 
    }
};

class Point {
private:
    int x, y;
 
public:
    // Parameterized Constructor
    Point(int x1, int y)                   // consider a situation where the parameter passed is of the same name as of the data member
    {                                       // here it creates an error
        x = x1;                             
        this -> y = y;
        cout << this << endl;
    }
    // getters
    int getX() { return x; }
    int getY() { return y; }
};
 
// note: this keyword stores the current object address

int main()
{
    construct c;
    cout << "a: " << c.a << endl << "b: " << c.b;    // to access here we have to use the dot operator
    cout<<endl;
    Point p1(10,8);
    cout<<"p1.x = "<<p1.getX()<<endl<<"p1.y = "<<p1.getY()<<endl;
    // this is basically a pointer to see that returns the same output
    cout<< &p1;

}


/*
When an object is declared in a parameterized constructor, the initial values have to be passed as arguments to the constructor function. The normal way of object declaration may not work. The constructors can be called explicitly or implicitly.

 Example e = Example(0, 50); // Explicit call

 Example e(0, 50);           // Implicit call
*/