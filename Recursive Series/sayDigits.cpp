#include<iostream>
#include <string>
using namespace std;

void sayDigits(int number, string arr[10]){
    if(number==0){
        return;
    }
    int digit = number%10;
    number = number/10;

    sayDigits(number,arr);
    cout<<arr[digit]<<" ";
}

int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    string arr[10] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    sayDigits(n,arr);
}