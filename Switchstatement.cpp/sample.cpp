#include<iostream>
using namespace std;
int main()
{
	float a,b,sum,mul,div,sub;
	char c;
	cout<<"enter the two numbers";
	cin>>a>>b;
	cout<<"enter the operator to be used + , * , - , / :";
	cin>>c;
	
	switch(c){
	case '+':
		
		sum=a+b;
		cout<<"the sum is  "<<sum;
		break;
		
	case '-':
		sub=a-b;
		cout<<"the substraction is :"<<sub;
		break;
		
	case '*':
		mul=a*b;
		cout<<"the product is :"<<mul;
		break;
	
	case '/':
		div=a/b;
		cout<<"the division is :"<<div;
		break;
	}
		
	return 0;
}
	