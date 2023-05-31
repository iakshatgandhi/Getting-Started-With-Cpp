#include<iostream>
using namespace std;

class Game {
    int Level;
    string *mission;
    public:
        int mode;
        int score; 
        Game(){}
        Game(Game &A);
        void display();
        

        void setLevel(int l){
            Level=l;
        } 
        void setMission(string m){
            mission = new string[10];
        }

        int getLevel(){
            return Level;
        }
        string getMission(){
            return *mission;
        }

};
Game::Game( Game &A){
    mode=A.mode;
    score=A.score;
}


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

}