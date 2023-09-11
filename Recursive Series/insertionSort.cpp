#include<iostream>
using namespace std;
void display(int *arr,int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void sort(int *arr,int index, int size){
    //base condition 
    if(index == size){
        return;
    }
    int current_index = arr[index];
    int j = index-1;
    while(j>=0){
        if(arr[j]>current_index){
            arr[j+1]=arr[j];
        }else{
            break;
        }
        j--;
    }
    arr[j+1]=current_index;

    sort(arr,index+1,size);
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	display(arr,n);
	sort(arr,1,n);
	display(arr,n);
	
}