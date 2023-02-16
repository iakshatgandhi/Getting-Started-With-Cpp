#include<iostream>
using namespace std;
void display(int *arr,int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void sort(int *arr, int size){
    for(int i=1;i<size;i++){
        int temp=arr[i];
        int j=i-1;
        while(j>=0){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }else{
                break;
            }
            j--;
        }
        arr[j+1]=temp;
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


/*
in this sorting technique we first consider the first element as sorted and the take the preceding element and the compare that with the 
previous one weather its need to be putted to the left or to the right of that and this goes on two loops working behind i holding the no
of rounds while j goes to the sorted elements to be compared 

basically we divide the array into two sections that is sorted and unsorted

void sort(int *arr, int size){
    for(int i=1;i<size;i++){
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }else
            break;
        }
        arr[j+1]=temp;
    }
}
*/