#include<iostream>
#include<string>
using namespace std;
int main (){
   string Food="Pizza";

   string *ptr=&Food;
   cout<<Food<<endl;
   cout<<*ptr<<endl;
   cout<<ptr;
}