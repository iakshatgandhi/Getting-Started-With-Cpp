// left shift operator left shifts the bits generally left shifting the integer value makes it the double of itself but thats the case only for the the small numbers if we consider large number in that case the if there is a one next to the MSB the on left shifting it comes over MSB and the number becomes negative.
// Right shift operator shifts the bit towards right also right shifting the number generally halfs the number
// when left and right shift is performed on the positive number then the padding is given 0 but in the case of the negative number its compilor dependent

#include<iostream>
using namespace std;
int main(){
   int a=17;
   int b=19;
    cout<<(a>>1)<<endl;
    cout<<(a>>2)<<endl;
    cout<<(b<<1)<<endl;
    cout<<(21<<2);
}