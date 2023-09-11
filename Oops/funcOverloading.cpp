/*
In function overloading, different parameters mean different types of parameters, different numbers of parameters, or a different sequence of parameters. For example, we have two functions fun(int x, int y) and fun(int x, int y, int z), which have the same name but a different number of parameters. Function overloading can also have the same function name with different types of parameters.

For example:

int sum(int a,int b)
{
     return a+b;
}
float sum(float a,float b)
{
      return a+b;
}
*/

//Based on different number of parameters
#include <iostream>
using namespace std;
class multiplication
 {
    public:
    int mul(int x,int y) //1
    {
        cout<<" function 1 is called ";
        return x*y;
    }
    int mul(int x,int y, int z) //2
    {
        cout<<" function 2 is called ";
       return x*y*z;
    }
 };
int main()
{
    multiplication M;     //class object decleration
    cout<<M.mul(2, 14, 6)<<endl;
    cout<<M.mul(10, 12)<<endl;
    cout<<M.mul(5, 10, 12);
    return 0;
}