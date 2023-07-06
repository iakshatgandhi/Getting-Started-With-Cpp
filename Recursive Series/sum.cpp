#include<iostream>
using namespace std;

int getSum(int *arr, int size){
    
    //base case 
    if(size == 0){
        return 0;
    }
    if(size == 1){
        return arr[0];
    }
    int remainingPart = getSum(arr+1,size-1);
    int sum = arr[0] + remainingPart;
    return sum;
}

int main(){
    int arr[100];
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
   int sum = getSum(arr,size);

   cout<<"Sum is "<<sum;
   return 0;
}

/*
Function call Stack
1. main()
   - Calls getSum(arr, size)
     - size = 5
     - arr = [1, 2, 3, 4, 5]

2. getSum(arr, size)
   - Calls getSum(arr+1, size-1)
     - size = 4
     - arr = [2, 3, 4, 5]

3. getSum(arr, size)
   - Calls getSum(arr+1, size-1)
     - size = 3
     - arr = [3, 4, 5]

4. getSum(arr, size)
   - Calls getSum(arr+1, size-1)
     - size = 2
     - arr = [4, 5]

5. getSum(arr, size)
   - Calls getSum(arr+1, size-1)
     - size = 1
     - arr = [5]

6. getSum(arr, size)
   - size == 1, returns arr[0] = 5

5. getSum(arr, size) (resumes)
   - remainingPart = 5
   - sum = arr[0] + remainingPart = 4 + 5 = 9
   - returns sum = 9

4. getSum(arr, size) (resumes)
   - remainingPart = 9
   - sum = arr[0] + remainingPart = 3 + 9 = 12
   - returns sum = 12

3. getSum(arr, size) (resumes)
   - remainingPart = 12
   - sum = arr[0] + remainingPart = 2 + 12 = 14
   - returns sum = 14

2. getSum(arr, size) (resumes)
   - remainingPart = 14
   - sum = arr[0] + remainingPart = 1 + 14 = 15
   - returns sum = 15

1. main() (resumes)
   - sum = 15
   - Outputs "Sum is 15"



Recursive Call Stack

getSum(arr, 5)
    getSum(arr+1, 4)
        getSum(arr+1, 3)
            getSum(arr+1, 2)
                getSum(arr+1, 1)
                    Returns arr[0] = 5
                Returns arr[0] + 5 = 4 + 5 = 9
            Returns arr[0] + 9 = 3 + 9 = 12
        Returns arr[0] + 12 = 2 + 12 = 14
    Returns arr[0] + 14 = 1 + 14 = 15
*/