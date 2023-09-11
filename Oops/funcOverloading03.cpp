//Based on different sequences of parameters
#include <iostream>
using namespace std;
class multiplication
 {
    public:
    double mul(int x, double y) //1
    {
        cout<<" function 1 is called ";
        return x*y;
    }
    double mul(double x, int y) //2
    {
        cout<<" function 2 is called ";
        return x*y;
    }
    double mul(double x, double y) //3
    {
        cout<<" function 3 is called ";
        return x*y;
    }
 };
int main()
{
    multiplication M;    //class object decleration
    cout<<M.mul(13, 12.3)<<endl;
    cout<<M.mul(9.6, 4.3)<<endl;
    cout<<M.mul(5.6, 8);
    return 0;
}


/*
Causes of function overloading in c++

----------------Type Conversion.
 
 #include<iostream>  
using namespace std;  
void print(int);  
void print(float);  
void print(int x)  
{  
    cout<<"x="<<x<<endl;  
}  
void print(float y)  
{  
    cout<<"y="<<y<<endl;  
}  
int main()  
{  
    print(92);  
    print(10.2);  
    return 0;  
}
In the above code, we get an error “call of overloaded ‘print(double)’ is ambiguous.” According to the above, learning print(10.2) will call the second function for its execution, but that is not going to happen. This is because the compile will take 10.2 as a double data type, and we didn’t write any function that overloads the double data type. 

--------------Function with default arguments
 

#include<iostream>  
using namespace std;  
void print(int);  
void print(int,int);  
void print(int x)  
{  
    cout<<"x="<<x<<endl;  
}  
void print(int x, int y=15)  
{  
    cout<<"x="<<x<<endl; 
    cout<<"y="<<y<<endl;  
}  
int main()  
{  
    print(12);  
    print(14);  
    return 0;  
}
In the above code, we get an error “call of overloaded ‘print(int)’ is ambiguous.” This is because the compiler cannot distinguish between the first and second functions. After all, both the function is written in a way that they are going to accept one integer.

----------------Function with a pass-by-reference
#include<iostream>  
using namespace std;  
void print(int);  
void print(int&);  
void print(int x)  
{  
    cout<<"x="<<x<<endl;  
}  
void print(int &y)  
{  
    cout<<"y="<<y<<endl; 
}  
int main()  
{  
    int x=42;
    print(12);  
    print(x);  
    return 0;  
}
In the above code, we get an error “call of overloaded ‘print(int)’ is ambiguous.” This is because the compiler cannot distinguish between the first and second functions. After all, both the function is written in a way that they are going to accept one integer
*/