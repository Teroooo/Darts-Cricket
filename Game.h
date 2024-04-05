
#ifndef GAME_H
#define GAME_H


#include "Player.h"

#include <vector>
#include <iomanip>
#include <iostream>

using namespace std;

class Game
{
private:
    /* data */
    std::vector<Player> players;
public:
    Game();

    void writePlayers();
    void start();
    void startCricket();
    Player findWinner();
};





#endif // GAME_H
