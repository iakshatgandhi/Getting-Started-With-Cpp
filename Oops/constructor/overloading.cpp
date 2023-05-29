/*
Constructor Overloading:

Constructor overloading is a feature in object-oriented programming languages that allows you to define multiple constructors within a class, each with a different set of parameters. By providing different constructor signatures, 

you can create objects in different ways or initialize them with different values based on the parameters passed.


For example, consider a class called Rectangle that represents a rectangle shape. You can define multiple constructors to accommodate different ways of creating a rectangle:
*/
#include<iostream>
using namespace std;

class Rectangle {
public:
    Rectangle(){

    };
    Rectangle(int width, int height){

    };
    Rectangle(int width){

    };
};

int main(){
    Rectangle rect1;
    Rectangle rect2(5, 10);
    Rectangle rect3(7);
}



/*
Important: Constructors Cannot Be Declared Virtual:
In object-oriented programming, virtual functions allow dynamic binding or runtime polymorphism, enabling the selection of the appropriate function implementation at runtime based on the actual object type. However, constructors are called implicitly during object creation and are not part of the virtual function mechanism.
When you create an object using the new keyword or by declaring it as a local variable, the constructor corresponding to the object's class is automatically called. Constructors are responsible for initializing the object's state, setting up member variables, and performing any necessary setup operations.

Since constructors are called before any virtual functions can be used, making a constructor virtual would not make sense. Virtual functions are used to provide polymorphic behavior when invoking member functions on objects of different classes through a common interface. Constructors, on the other hand, are not part of this interface and are not meant to be overridden or inherited.

In summary, constructor overloading allows you to create multiple constructors in a class with different parameter sets, while constructors themselves cannot be declared as virtual because they are called implicitly during object creation and are not part of the virtual function mechanism. 
*/