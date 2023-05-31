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
	
	Sample obj2(obj1);  // in copy constructor & operator is used because if we not use that in the function arguments 
	//its basically then call by value so the copy of the same object is created and if the copy of the object is being created 
	// then only the copy constructor is being called so it becomes a loop that leads to an error to avoid we copy object by passing them 
	// as call by reference (using ampersand)...
	obj2.display();
	return 0;
}