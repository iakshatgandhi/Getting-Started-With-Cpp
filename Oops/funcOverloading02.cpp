//Based on different types of parameters
#include <iostream>
using namespace std;
class multiplication
 {
    public:
    int mul(int x, int y) //1
    {
        cout<<" function 1 is called ";
        return x*y;
    }
    double mul(double x,double y) //2 
    {
        cout<<" function 2 is called ";
       return x*y;
    }
 };
int main()
{
    multiplication M;     //class object decleration
    cout<<M.mul(8.2, 9.5)<<endl;
    cout<<M.mul(10, 12)<<endl;
    cout<<M.mul(5.6, 10.5);
    return 0;
}