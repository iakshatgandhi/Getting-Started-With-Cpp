// Example: Explicit copy constructor

#include <iostream>
using namespace std;

class Sample
{
	int id;
	public:
	void init(int x)
	{
		id=x;
	}
	Sample(){} //default constructor with empty body
	Sample(Sample &t);
	
	void display()
	{
		cout<<endl<<"ID="<<id;
	}
};

Sample::Sample(Sample &t) //copy constructor
	{
		id=t.id;
	}
int main()
{
	Sample obj1;
	obj1.init(10);
	obj1.display();
	
	Sample obj2(obj1); 
	obj2.display();
	return 0;
}
