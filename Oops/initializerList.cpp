//Initializer List is used in initializing the data members of a class. The list of members to be initialized is indicated with constructor as a comma-separated list followed by a colon. Following is an example that uses the initializer list to initialize x and y of Point class.


#include<iostream>
using namespace std;

class Point {
private:
	int x;
	int y;
public:
	Point(int i , int j ):x(i), y(j) {}
	
	int getX()  {return x;}
	int getY() const {return y;}


    /* The above use of Initializer list is optional as the
		constructor can also be written as:
		Point(int i, int j) {
			x = i;
			y = j;
		}
	*/
};

int main() {
Point t1(10, 15);
cout<<"x = "<<t1.getX()<<", ";
cout<<"y = "<<t1.getY();
return 0;
}



/*
The above code is just an example for syntax of the Initializer list. In the above code, x and y can also be easily initialed inside the constructor. But there are situations where initialization of data members inside constructor doesn’t work and Initializer List must be used. Following are such cases:

1) For initialization of non-static const data members: 
2) For initialization of reference members: 
3) For initialization of member objects which do not have default constructor: 
4) For initialization of base class members :
5) When constructor’s parameter name is same as data member 
6) For Performance reasons: 
*/