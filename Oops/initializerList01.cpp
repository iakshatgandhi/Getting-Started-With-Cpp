/*
1) For initialization of non-static const data members: 
const data members must be initialized using Initializer List. In the following example, “t” is a const data member of Test class and is initialized using Initializer List. Reason for initializing the const data member in the initializer list is because no memory is allocated separately for const data member, it is folded in the symbol table due to which we need to initialize it in the initializer list. 
*/

#include<iostream>
using namespace std;

class Test {
	const int t;
public:
	Test(int t):t(t) {} //Initializer list must be used
	int getT() { return t; }
};

int main() {
	Test t1(10);
	cout<<t1.getT();
	return 0;
}

