#include<iostream>
using namespace std;
void display(int *arr,int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
void sort(int *arr, int size){

    if(size == 0 || size == 1){
        return;
    }

   for(int i=0;i<size-1;i++){
		if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
	} 
    //recursive call
    sort(arr,size-1);
}


int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	display(arr,n);
	sort(arr,n);
	display(arr,n);
	
}