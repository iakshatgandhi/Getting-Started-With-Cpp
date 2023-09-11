#include<iostream> 
using namespace std; 
// Parent class 
class Animal { 
    public: 
    int age;
    int weight;

    void setAge(int age){
        this->age=age;
    }
    void setWeight(int weight){
        this->weight=weight;
    }

    void eat() 
    { 
        cout << "eating" << endl; 
    } 
};
class Dog: public Animal { 
    public: 
    void bark() 
    { 
        cout << "barking"; 
    } 
}; 

int main() { 
    // Creating an object of the child class 
    Dog obj; 
    // calling methods 
    obj.setAge(5);
    obj.setWeight(10); 

    cout<<endl<<"age "<<obj.age;
    cout<<endl<<"weight "<<obj.weight<<endl;
    obj.eat(); 
    obj.bark(); 
}