#include<iostream>
using namespace std;

class B {
    public:
    int a;
    int b;

    public:
    void operator + (B &obj){    //overloading syntax 
       //return type operator operator_symbol (argument)
        int value1 = this->a;
        int value2 = obj.a;
        cout<< " overloaded + = "<<value2-value1<<endl;
    }
};

int main(){
    B obj1,obj2;
    obj1.a = 4;
    obj2.a = 5;
    obj1 + obj2;
}