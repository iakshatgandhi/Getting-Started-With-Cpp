#include<iostream>
#include <vector>
using namespace std;

int findDuplicate(int arr[], int size) 
{	
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    for(int i=1;i<size;i++){
        ans=ans^i;
    }
    return ans;
}

int main(){
    int t,size;
    cin>>t;
    
     for(int j=1;j<=t;j++){
        int size;
        cin>>size;
        int arr[size];

        for(int i=0;i<size;i++){
            cin>>arr[i];
        }
        cout<<findDuplicate(arr, size);
     }
}


// #include<iostream>
// #include <vector>
// using namespace std;

// int findDuplicate(vector<int> &arr) 
// {	
//     int ans=0;
//     for(int i=0;i<arr.size();i++){
//         ans=ans^arr[i];
//     }
//     for(int i=1;i<arr.size();i++){
//         ans=ans^i;
//     }
//     return ans;
// }

// int main(){
//     int t,size;
//     vector<int> arr;
//     cin>>t;
    
//      for(int j=1;j<=t;j++){

//          cin>>size;
//         for (int i = 0; i < size; i++) {
  
//         // Inserting elements at every
//         // row i using push_back()
//         // function in vector
//             for (int j = i + 1; j < 5; j++) {
//                 v[i].push_back(j);
//             }
//         }

//         cout<<findDuplicate(arr);          to be done after the C++ STL got completed
//      }
// }



//https://www.codingninjas.com/codestudio/problems/duplicate-in-array_893397