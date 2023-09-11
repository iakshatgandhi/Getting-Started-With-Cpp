#include<iostream>
using namespace std;

class human{

    public:
    int height;
    int weight;
    int age;

    void setHeight(int height){
        this->height=height;
    }
    void setWeight(int weight){
        this->weight=weight;
    }
    void setAge(int age){
        this->age=age;
    }
};


// definations of child class or the sub class inheriting the parent or the super class in the public mode
class male : public human{ 
    public:
    string colour;
    void setColour(string colour){
        this->colour=colour;
    }
    string getColour(){
        return colour;
    }


    void sleep(){
        cout<<"is sleeping"<<endl;
    }
};

int main(){
    male obj1;
    obj1.setHeight(15);
    obj1.setWeight(85);
    obj1.setAge(7);
    obj1.setColour("white");

    cout<<"height is: "<<obj1.height<<endl;
    cout<<"weight is: "<<obj1.weight<<endl;
    cout<<"age is: "<<obj1.age<<endl;
    cout<<"colour is: "<<obj1.colour<<endl;
    obj1.sleep();
}