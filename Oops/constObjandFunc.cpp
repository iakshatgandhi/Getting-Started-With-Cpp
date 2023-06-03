/*The const member functions are the functions which are declared as constant in the program. The object called by these functions cannot be modified. It is recommended to use const keyword so that accidental changes to object are avoided.

A const member function can be called by any type of object. Non-const functions can be called by non-const objects only.

Here is the syntax of const member function in C++ language,

datatype function_name const();
*/
#include<iostream>
using namespace std;
class Demo {
   int val;
   public:
   Demo(int x = 0) {
      val = x;
   }
   int getValue() const {
      return val;
   }
};
int main() {
   const Demo d(28);
   Demo d1(8);
   cout << "The value using object d : " << d.getValue();
   cout << "\nThe value using object d1 : " << d1.getValue();   //const function can be called by any object
   return 0;
}