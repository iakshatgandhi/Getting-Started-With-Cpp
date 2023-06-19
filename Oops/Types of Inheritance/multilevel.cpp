#include<iostream> 
using namespace std; 
// Parent class 
class Animal { 
    public: 
    void eat() 
    { 
        cout << "eating" << endl; 
    } 
}; 
// Child class 
class Dog: public Animal { 
    public: 
    void bark() 
    { 
        cout << "barking" << endl; 
    } 
}; 
class BabyDog: public Dog { 
    public: void weep() 
    { 
        cout << "weeping"; 
    } 
}; 
int main() { 
    BabyDog obj; 
     
    obj.eat(); 
    obj.bark(); 
    obj.weep(); 
}