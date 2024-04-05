//
// Created by antero on 10-02-2024.
//
#include "Game.h"

void Game::writePlayers() {
    cout<<"How many players?"<<endl;
    int playerNum;
    cin>>playerNum;
    for(int i=1;i<=playerNum;i++) {
        cout<<"Player "<<i<<" name:"<<endl;
        string name;
        cin>>name;
        Player player = Player(name);
        players.push_back(player);
    }
}

void Game::start() {
    writePlayers();
    startCricket();
}

void Game::startCricket() {
    for(int round=1; round<=20;round++) {
        cout<<"round "<<round<<endl;
        for(auto it=players.begin();it!=players.end();it++) {
            cout<<it->getName()<<" turn"<<endl;
            for(int shot=0;shot<3;shot++) {
                string hit;
                cout<<"hit:";
                cin>>hit;
                int multiplier=0;
                if(hit[0]=='s') multiplier=1;
                else if(hit[0]=='d') multiplier=2;
                else if(hit[0]=='t') multiplier=3;
                hit=hit.substr(1,4);
                for(int i=1;i<=multiplier;i++)
                    it->sumToScore(hit);
            }
            cout<<"score: "<<it->getScore()<<endl;
            cout<<"marks: "<<it->getMarks()<<endl;
        }

    }
    Player winner = findWinner();
    cout<<winner.getName()<< " won with "<< winner.getScore()<<" points"<<endl;
    cout<<"marks: "<<winner.getMarks();
}

Player Game::findWinner() {
    Player winner=Player();
    for(auto it=players.begin();it!=players.end();it++) {
        if(it->getScore()>winner.getScore()) {
            winner=*it;
        }
        else if(winner.getScore()==it->getScore()) {
            if(it->getMarks()>winner.getMarks()) {
                winner=*it;
            }
        }
    }
    return winner;
}

Game::Game() {

}

