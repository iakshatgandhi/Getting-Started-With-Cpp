#include<iostream>
using namespace std;

void display(int *array, int size) {
   for(int i = 0; i<size; i++)
      cout << array[i] << " ";
   cout << endl;
}
void selectionSort(int *arr, int idx, int size) {
    //base case
    if(idx == size)
        return;

    int smallestIdx = idx; // take curr idx element as smallest

    for(int i = idx + 1; i < size; i++){
        if(arr[smallestIdx] > arr[i]) // found another smallest element than arr[smallestIdx]
            smallestIdx = i; // update the smallestIdx val
        }

    //place smallest element found at idx
    int temp = arr[idx];
    arr[idx] = arr[smallestIdx];
    arr[smallestIdx] = temp;

    // Recursive call
    selectionSort(arr , idx + 1 , size);
}

int main() {
   int n;
   cin >> n;
   int arr[n];
   
   for(int i = 0; i<n; i++) {
      cin >> arr[i];
   }

   cout << "Array before Sorting: ";
   display(arr, n);
   selectionSort(arr, 0 , n);
   cout << "Array after Sorting: ";
   display(arr, n);
}