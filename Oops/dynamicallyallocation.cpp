#include<iostream>
using namespace std;

class Game {
    int Level;
    string *mission = new string[10];
    public:
        int mode;
        int score; 
        Game(){}
        Game(Game &A);
        void display();
        static int timeToComplete;
            // like here time to complete the game lets say does not depend on the player so in those cases we use the static data members
        void setLevel(int l){
            Level=l;
        } 
        void setMission(string m){
            *mission = m;
        }

        int getLevel(){
            return Level;
        }
        string getMission(){
            return *mission;
        }

        static int staticfunc(){
            return timeToComplete;  //only the static data member be assessed
        }

};
Game::Game( Game &A){
    mode=A.mode;
    score=A.score;
    mission=A.mission;
}
int Game :: timeToComplete = 10;

void Game::display()
{
    cout<<"the mode is "<<mode<<endl<<"the score is "<<score<< endl;
}
int main(){
    Game obj1;
    obj1.setLevel(5);
    obj1.setMission("Attack");
    obj1.mode = 1;
    obj1.score = 33;
    cout<<"the level is "<<obj1.getLevel()<<endl<<"the mission is "<<obj1.getMission()<< endl;
    Game obj2(obj1);
    obj1.display();
    obj2.display();


    obj1.setMission("Defend");
    cout<<"the mission is "<<obj1.getMission()<< endl;
    cout<<"the mission is "<<obj2.getMission()<< endl;


    /*
        Static data members are class members that are declared using static keywords. A static member has certain special to access the static data member we need not to create any object just one had to initialize the static member ,characteristics which are as follows:

        1. Only one copy of that member is created for the entire class and is shared by all the objects of that class, no matter how many objects are created.
        2. It is initialized before any object of this class is created, even before the main starts.
        3. It is visible only within the class, but its lifetime is the entire program.

        also there are the static data functions also to call these functions there is no need to create the object
        this keyword is use to point to the current object but there is no object in these functions so there no this keyword as well
        also static functions can only access the static members 

        Syntax:

        static data_type data_member_name;
*/

    cout<< Game::timeToComplete <<endl;
    cout<< Game::staticfunc() <<endl;

}