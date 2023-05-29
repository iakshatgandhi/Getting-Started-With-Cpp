#include<iostream>
using namespace std;

class Game {
    int Level;
    string mission;
public:
    int mode;
    int score; 
    Game(){}
    Game(Game &A)
    void display();

    void setLevel(int l){
        level=l;
    } 
    void setMission(string m){
        mission=m;
    }
};


void Game::display()
{

}
