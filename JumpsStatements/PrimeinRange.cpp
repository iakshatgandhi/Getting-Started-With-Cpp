#include<iostream>
using namespace std;
int main(){
	int a,b,i,Num;
	cout<<"enter the range";
	cin>>a>>b;
	for(Num=a;Num<=b;Num++){
		for(i=2;i<Num;i++){
			if(Num%i==0){
				break;
			}
		}
		if(i==Num){
		cout<<Num<<endl;
		}
	}
return 0;
}