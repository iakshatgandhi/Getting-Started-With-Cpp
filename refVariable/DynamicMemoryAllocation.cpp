/*
whenever a program starts its execution it brings a memory with its execution these memory are of 2 types that is 
1. stack
2. heap
basically basically speaking in layman's terms stack is a small memory and heap is a large memory 

when we declare a variable its all done in the stack memory defining an array vector all in the stack memory

while defining arr[1000] program takes the pre stack allocated memory atv the compile time only
but defining the arr[n] like that during the compile time program does not aware of the size to be demanded and heap memory cannot be taken that way all to be done in stack since stack does not hold very large space there might be the case when program brings memory from the stack 
less then what got demanded at the runtime then the program got crashed that's why defining the variable sized array like that would be a bad 
practice .

so Que is how to create a variable size array then the answer to that is using the heap memory for that by the dynamic memory allocation

note: using the stack memory is the static memory allocation and using the heap is the dynamic memory allocation...
*/ 

#include<iostream>
using namespace std;
int main(){
    // creating a int in the heap memory
    new int;  
    // this is how the dynamic memory is being allocated with the new keyword but the catch is u cannot assign name to that 
    // instead u can use a pointer to reference that memory imp point to note here is that new int refer the memory address.
    int *ptr = new int;
    *ptr = 5;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<new int<<endl;
}