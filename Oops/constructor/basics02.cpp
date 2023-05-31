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
    student s;             // static allocation
    student *s1 = new student;  //dynamic allocation
    s.display();
    cout<<endl;
    (*s1).display();     // this is dynamically allocated
    // one more way to write the same
    cout<<endl;
    s1->display();

    return 0;
}