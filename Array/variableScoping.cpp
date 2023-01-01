#include<iostream>
using namespace std;

void update(int arr[],int n){
    cout<<"inside the function"<<endl;
    //updating the array 1st element
    arr[0]=10;
    arr[1]=200;
    //printing the array in the function
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    cout<<"in the main function"<<endl;
}
int main(){
    int arr[3]={1,2,3};
    update(arr,3);
                                    //printing the array in the main function
     for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
}



/*
In the case of passing the variable from the main function into any function then it creates the copy of the actual variable and any
operation performed oven it does no affects the original variable into the main

but here in the above case array element which is updated into the main also affecting the original array ?
here, imp point to note is that int arr[3]. here arr is denoting not only the array name but also the array's base address
so when we are making a call update(arr,3) so actually we are delivering the base address of the original array to the function now  
any operation performed over that make changes into the original as well 
*/