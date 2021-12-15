#ifndef PLAYERS_H
#define PLAYERS_H

#include <string>
#include <vector>
#include <iostream>

using namespace std; 

class Players{ // Class players with different parameters and methods
    public:
        int wood;
        int bricks;
        int grain;
        int wool;
        int ore;
        int victoryPoints;
        int breaker; //thief
        vector<int> ownedTiles; // creation of vector to insert owned tiles within it 
        vector<int> upgradeTiles; //creation of vector to insert upgraded tiles within it 
        
        void print(); // Added functions
        string getName();
        void setName(string);
        Players();
        Players(int);
        void addTile(int);
        
    private:
        string playerNames; 
    };

#endif