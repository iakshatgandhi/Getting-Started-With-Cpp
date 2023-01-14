#include<iostream>
using namespace std;

int binarysearch(int arr[], int size, int key){

    int start=0;
    int end=size-1;

    int mid= start+(end-start)/2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }else if(key>arr[mid]){
            start=mid+1;
        }else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}

int main(){
    int even[8]={12,34,67,78,85,88,90,95};
    int odd[5]={21,33,39,41,54};

    int evenindex=binarysearch(even,8,88);
    cout<<"the index of the 88 is "<<evenindex<<endl;
    evenindex=binarysearch(even,8,19);
    cout<<"the index of the 19 is "<<evenindex<<endl;

    int oddindex=binarysearch(odd,5,33);
    cout<<"the index of the 33 is "<<oddindex;

    return 0;
}