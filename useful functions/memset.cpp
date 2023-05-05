// C++ program to demonstrate memset
#include <cstring>
#include <iostream>
using namespace std;

// Driver Code
int main()
{
	char str[] = "geeksforgeeks";
	memset(str, 't', sizeof(str));
	cout << str;
    cout<<"\n";

    bool mark[5];
    memset(mark, true, sizeof(mark));
    for(int i=0;i<5;i++){
        cout<< boolalpha <<mark[i]<<endl;
    }
	return 0;
}

//Memset() is a C++ function. It copies a single character for a specified number of times to an object.