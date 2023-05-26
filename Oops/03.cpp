#include<iostream>
using namespace std;

class Car {
private:
    string brand;   
    string model;
public:
    int year;
// Setters defining
    void setBrand(string b){
        brand=b;
    } 
    void setModel(string m){
        model=m;
    }

    
// Getters defining 
    string getBrand(){
        return brand;
    }
    string getModel(){
        return model;
    }
};

int main() {
    Car carObj;
    carObj.setBrand("BMW");
    carObj.setModel("X5");
    // since year is out of the scope of the private data member
    carObj.year = 1999;

    // Print attribute values
    cout << carObj.getBrand() << " " << carObj.getModel() << " " << carObj.year << "\n";

}


// In the case of the access modifier setted to the private it is not possible to access the data members directly 
// in that case we can use the getters and setters 