#include <iostream> 
using namespace std; 
 
class Vehicle { 
    public: 
    Vehicle() 
    { 
        cout << "This is a Vehicle" << endl; 
    } 
}; 
class Fare { 
    public: 
    Fare() 
    { 
        cout << "Fare of Vehicle\n"; 
    } 
}; 
class Car: public Vehicle 
{ };
class Bus: public Vehicle, public Fare { }; 


int main() { 
    // creating object of sub class will // invoke the constructor of base class 
    Bus obj2; 
    return 0; 
    
}