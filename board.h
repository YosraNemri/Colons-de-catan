#ifndef BOARD_H
#define BOARD_H

#include <stdlib.h>
#include <iostream>
#include <sstream>

using namespace std;

class Tile{
    protected:
    string player; // Prints the name of player on the occupied tile 
    
    public:
    int tileType;
    bool isUpgraded; // boolean to indicate the state of the tile 
    bool isOccupied; // boolean to indicate the state of the tile whether occupied or free
    int number;
    Tile();
    virtual string render(int);
    void buySettlement(string); // fonction to buy settlement
    void upgradeSettlement();   // fonction to upgrade settlement
};
class Forest : public Tile // class to construct the structure of the Forest Tile
{ 
    public:
    Forest(int);
    string render(int);
};
class Hills : public Tile // class to construct the structure of the Hills Tile
{
    public:
    Hills(int);
    string render(int);
};
class Field : public Tile // class to construct the structure of the Field Tile
{
    public:
    Field(int);
    string render(int);
};
class Pasture : public Tile // class to construct the structure of the Pasture Tile
{
    public:
    Pasture(int);
    string render(int);
};
class Mountain : public Tile{  // class to construct the structure of the Mountain Tile
    public:
    Mountain(int);
    string render(int);
};

#endif