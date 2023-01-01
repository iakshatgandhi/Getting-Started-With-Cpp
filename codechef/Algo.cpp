#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int arr[t];
	for(int i=0;i<t;i++){
	    cin>>arr[i];
	}
	

	for(int j=0;j<t;j++){
	    
    	if(arr[j]>=2000){
    	    cout<<1<<endl;
    	}else if(arr[j]>=1600&&arr[j]<2000){
    	    cout<<2<<endl;
    	}else if(arr[j]<1600)
    	 cout<<3<<endl;   
    	

	}
		return 0;
}
