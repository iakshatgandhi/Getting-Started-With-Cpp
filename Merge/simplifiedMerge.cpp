#include<iostream>
using namespace std;

void merge(int arr[], int start, int end){
    int mid = start+(end-start)/2;
    int len1 = mid - start + 1;
    int len2 = end - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int mainArrayIndex = start;
    for(int i=0;i<len1;i++){
        first[i]=arr[mainArrayIndex++];
    }
    mainArrayIndex = mid+1;
    for(int i=0;i<len2;i++){
        second[i]=arr[mainArrayIndex++];
    }

    //merge two sorted array
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex=start;

    while(index1 < len1 && index2 < len2){
        if(first[index1]<second[index2]){
            arr[mainArrayIndex++] = first[index1++];
        }
       else{
            arr[mainArrayIndex++] = second[index2++];
        }   
    }
    while(index1 < len1) {
        arr[mainArrayIndex++] = first[index1++];
    }

    while(index2 < len2 ) {
        arr[mainArrayIndex++] = second[index2++];
    }

    delete []first;
    delete []second;

}

void mergeSort(int arr[], int s, int e){
    if(s>=e){
        return;
    }
    int mid = s+(e-s)/2;
    mergeSort(arr,s,mid);  // left part
    mergeSort(arr,mid+1,e);  // right part

    merge(arr,s,e);

}

int main(){
    int arr[100];
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    mergeSort(arr, 0, n-1);

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    } cout << endl;

    return 0;
    
}




/*
Function Call Stack:
Let's consider an example to sort an array [38, 27, 43, 3, 9, 82, 10].

mergeSort(arr, 0, 6)
|
+--> mergeSort(arr, 0, 3)
|    |
|    +--> mergeSort(arr, 0, 1)
|    |    |
|    |    +--> mergeSort(arr, 0, 0)
|    |    |
|    |    +--> mergeSort(arr, 1, 1)
|    |
|    +--> mergeSort(arr, 2, 3)
|         |
|         +--> mergeSort(arr, 2, 2)
|         |
|         +--> mergeSort(arr, 3, 3)
|
+--> mergeSort(arr, 4, 6)
     |
     +--> mergeSort(arr, 4, 5)
     |    |
     |    +--> mergeSort(arr, 4, 4)
     |    |
     |    +--> mergeSort(arr, 5, 5)
     |
     +--> mergeSort(arr, 6, 6)
*/


// getting the clear understanding of the dry run is imp ref video https://www.youtube.com/watch?v=ogjf7ORKfd8