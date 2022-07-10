/*Chef's computer has NN GB of free space. He wants to save XX files, each of size 1 GB and YY files, each of size 2 GB on his computer. Will he be able to do so?

Chef can save all the files on his computer only if the total size of the files is less than or equal to the space available on his computer.

Input Format
The first line contains an integer TT, denoting the number of test cases. The TT test cases then follow:
The first and only line of each test case contains three integers N, X, YN,X,Y, denoting the free-space in computer, the number of 1 and 2 GB files respectively.*/
#include <iostream>
using namespace std;

int main() {
	int T,N,X,Y,s,u;
	cin>>T;
	while(T--){
	    cin>>N>>X>>Y;
	    u=2*Y;
	    s=X+u;
	    if(N>=s){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
