

#include "Player.h"


Player::Player(string name)
{
    this->name=name;
    score=0;
    marks =0;
    hits = {{"miss",0},{"bull",-3},{"15",-3}, {"16",-3},
            {"17",-3}, {"18",-3}, {"19",-3}, {"20",-3}};
}

string Player::getName() {
    return name;
}

int Player::getScore() {
    return score;
}



Player::Player() {
    name ="";
    score = 0;
    marks = 0;
    hits = {{"miss",0},{"bull",-3},{"15",-3}, {"16",-3},
            {"17",-3}, {"18",-3}, {"19",-3}, {"20",-3}};
}

void Player::sumToScore(string toSum) {
    if(toSum=="bull") {
        if(hits[toSum]>=0 )
            score+=25;
        else marks+=1;
    }
    else if(toSum != "miss" && stoi(toSum)<21 && stoi(toSum)>14) {
        if(hits[toSum]>=0 )
            score+= stoi(toSum);
        else marks+=1;
    }
    hits[toSum]+=1;
}

int Player::getMarks() {
    return marks;
}


