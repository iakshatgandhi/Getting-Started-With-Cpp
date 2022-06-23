#include <iostream>
using namespace std;
#define AREA(l, b) (l * b)
int main()
{
    int l,b,area;
    cout<<"enter the value of l and b respectively";
    cin>>l>>b;

	area = AREA(l,b);

	cout << "Area of rectangle is: " << area;

	return 0;
}
