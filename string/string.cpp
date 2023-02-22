#include<iostream>
#include<string>
using namespace std;
int main(){
    string str1;
    cout<<"enter the first name ";
    cin>>str1;

    string str2;
    cout<<"enter the last name ";
    cin>>str2;

    cout<< str1.length()<<endl;
    cout<< str2.size()<<endl;

    string str3;
    str3="to be question.";

    str3.insert(6,"the ");
    string str4=" asked";
    str3.insert(18,str4);
    cout<<str3<<endl;

    string str5="Akshat";
    str5.pop_back();
    cout<<str5<<endl;
    str5.append("t");
    string str6=", this is the skillset";
    for(int i = 0; str6[i] != '\0'; i++)
    {
        str5.push_back(str6[i]);
    }
    cout<<str5<<endl;


    string str7="the world is blue";
    cout<<str7<<endl;
    string str8;
    cin>>str8;
    cout<<str8;

}