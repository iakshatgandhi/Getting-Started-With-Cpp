// defining the constructor outside the class 

#include<iostream>
using namespace std;

class student
{
    int rno;
    double fee;
    char name[20];
    public:
    student();
    void display();
};

student::student(){
    cout<<"enter the RollNo: ";
    cin>>rno;
    cout<<"Enter the Name: ";
    cin>>name;
    cout<<"Enter the Fee: ";
    cin>>fee;
}

void student::display(){
    cout<<endl<<rno<<"\t"<<name<<'\t'<<fee;
}

int main(){
    student s;
    s.display();
    return 0;
}