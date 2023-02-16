#include<iostream>
using namespace std;
void display(int *arr,int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
void sort(int *arr, int size){
    bool swapped=false;
	for(int i=0;i<size-1;i++){
		for(int j=0;j<size-1-i;j++){
			if(arr[j]>arr[j+1])
			swap(arr[j],arr[j+1]);
            swapped=true;
		}
        if(swapped==false){
            break;
        }
	}
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


/*soo in the bubble sort we use to compare the two two element and ignores if the succeeding one is greater then the preceding
else we swap them and this goes till the n-1 rounds and after each successful 

ith round the ith largest element gets placed to its actual location


if we start i from 1 then the function goes 
void sort(int *arr, int size){
	for(int i=1;i<size;i++){
		for(int j=0;j<size-i;j++){
			if(arr[j]>arr[j+1])
			swap(arr[j],arr[j+1]);
		}
	}
}
*/