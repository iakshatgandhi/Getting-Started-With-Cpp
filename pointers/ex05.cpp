#include <iostream> 
using namespace std; 
int main() { 
    int firstvalue = 5, secondvalue = 15; 
    char thirdvalue = 'a'; 
    int * p1, * p2; 
    char * p3;
    p1 = & firstvalue;
    p2 = & secondvalue;
    p3 = & thirdvalue;
    * p1 = 10;
    * p2 = * p1;
    * p1 = 20;
    * p3 = 'b'; 
    cout << "firstvalue is " << firstvalue << endl; 
    cout << "secondvalue is " << secondvalue << endl; 
    cout << "thirdvalue is " << thirdvalue << endl; 
    return 0;
}