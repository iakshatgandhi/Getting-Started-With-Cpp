#include<iostream>
using namespace std;

void display(int *array, int size) {
   for(int i = 0; i<size; i++)
      cout << array[i] << " ";
   cout << endl;
}
void selectionSort(int *array, int size) {
   int i, j, minIndex;
   for(i = 0; i<size-1; i++) {
      minIndex = i;   //get index of minimum data
      for(j = i+1; j<size; j++)
         if(array[j] < array[minIndex])
            minIndex = j;
         //placing in correct position
         swap(array[i], array[minIndex]);
   }
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
   selectionSort(arr, n);
   cout << "Array after Sorting: ";
   display(arr, n);
}