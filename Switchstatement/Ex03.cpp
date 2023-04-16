#include <iostream>
using namespace std;

int main(){
    int amt,notes;
    cout<<"Enter the amount: ";
    cin>>amt;
    
    switch(1){
        case 1:
            notes=amt / 2000;
            amt=amt%2000;
            if(notes==0){}
            else
            cout<<"2000 rupee notes: "<<notes<<endl;
        
        case 2:
            notes= amt / 500;
            amt=amt % 500;
            if(notes==0){}
            else
            cout<<"500 rupee notes: "<<notes<<endl;
        
        case 3:
            notes= amt/ 200;
            amt=amt % 200;
            if(notes==0){}
            else
            cout<<"200 rupee notes: "<<notes<<endl;

        case 4:
            notes= amt/ 100;
            amt=amt % 100;
            if(notes==0){}
            else
            cout<<"100 rupee notes: "<<notes<<endl;

        case 5:
            notes= amt/ 50;
            amt=amt % 50;
            if(notes==0){}
            else
            cout<<"50 rupee notes: "<<notes<<endl;

        case 6:
            notes= amt/ 10;
            amt=amt % 10;
            if(notes==0){}
            else
            cout<<"10 rupee notes: "<<notes<<endl;

        case 7:
            notes= amt/ 1;
            if(notes==0){}
            else
            cout<<"1 rupee notes: "<<notes<<endl;
    }
}