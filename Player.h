
#ifndef PLAYER_H
#define PLAYER_H



#include <vector>
#include <map>
#include <iomanip>
#include <iostream>

using namespace std;

class Player
{
private:
    string name;
    int score;
    map<string,int> hits;
    int marks;
public:
    Player(string name);
    string getName();
    int getScore();
    int getMarks();
    void sumToScore(string toSum);

    Player();
};

#endif // PLAYER_H