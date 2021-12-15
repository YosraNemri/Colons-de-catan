#include "gamers.h"

Players::Players(){ // intialization of ressources for each player at the beginning of the game
    this->wood = 10; 
    this->bricks = 10;
    this->grain = 10;
    this->wool = 10;
    this->ore = 10;
    this->victoryPoints=0;
}

void Players::print() { // display of ressources for each player
    cout << "wood = " << wood << endl; 
    cout << "bricks = " << bricks << endl;
    cout << "grain = " << grain << endl;
    cout << "wool = " << wool << endl;
    cout << "ore = " << ore << endl;
    cout << "victory points = " << victoryPoints << endl;    
};

void Players::setName(string playerNames){ // Setting of players name
    this-> playerNames = playerNames;
};

string Players::getName(){ // Insertion of players name
    return this-> playerNames;
}

void Players::addTile(int tile){ // Attribution of tiles for each player if owned or bought
    ownedTiles.push_back(tile);
}