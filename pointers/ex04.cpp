#include <iostream>
using namespace std; 
int main() { 
    int i = 10; 
    int *p; 
    p = & i; 
    cout << "Address of the variable i is " << p << endl;
    cout << "value of i is " << *p << endl; 
    cout << "Address of the pointer p is " << & p; 
    return 0; 
}





//Note: The asterisk (*) used when declaring a pointer only means that it is a pointer (it is part of its type compound specifier) and should not be confused with the dereference operator seen above, but which is also written with an asterisk (*). They are simply two different things represented with the same sign.