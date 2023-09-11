#include<iostream>
using namespace std;
// class is simply a user define data type 
class game{
    char character;
    int health;
    int power;
    //data members of the class
};

int main(){
    // object to the class
    game basic;

    cout <<"the size of the obj is "<<sizeof(basic);
}

// note: empty class holds a memory of 1 byte just for keeping the track of the defined class

// the 3 bytes size ids due to the padding added