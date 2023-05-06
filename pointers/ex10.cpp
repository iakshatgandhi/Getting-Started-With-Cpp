#include<iostream>
using namespace std;
int main(){
	int  arr[10];
	int *ptr = &arr[0];
	for(int i=0;i<10;i++){
		cin>>arr[i];
	}
	for(int j=0;j<10;j++){
		cout<<ptr<<endl;
		ptr=ptr+1;
	}
}
