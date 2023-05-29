/*
Constructor in C++ is a special method that is invoked automatically at the time of object creation. It is used to initialize the data members of new objects generally. The constructor in C++ has the same name as the class or structure. Constructor is invoked at the time of object creation. It constructs the values i.e. provides data for the object which is why it is known as constructors.

• Constructor is a member function of a class, whose name is same as the class name.
• Constructor is a special type of member function that is used to initialize the data members for an object of a class automatically, when an object of the same class is created.
• Constructor is invoked at the time of object creation. It constructs the values i.e. provides data for the object that is why it is known as constructor.
• Constructor do not return value, hence they do not have a return type.


The prototype of the constructor looks like 
    <class-name> (list-of-parameters);


Constructor can be defined inside the class declaration or outside the class declaration

a.    Syntax for defining the constructor within the class

        <class-name>(list-of-parameters)
        {
                  //constructor definition
        }

b.    Syntax for defining the constructor outside the class

        <class-name>: :<class-name>(list-of-parameters)
        {
                //constructor definition
        }

*/


#include<iostream>
using namespace std;

class student 
{
    int rno;
    char name[50];
    double fee;

    public:  //defining the constructor within the class
// Defining the constructor 
    student(){
        cout<<"enter the RollNo: ";
        cin>>rno;
        cout<<"Enter the Name: ";
        cin>>name;
        cout<<"Enter the Fee: ";
        cin>>fee;
    }

    void display(){
        cout<<endl<<rno<<"\t"<<name<<"\t"<<fee;
    }
};
int main(){
    student s;  //constructor gets called automatically when we create the object of the class
    s.display();
    return 0;
}