#include "board.h"


string Tile::render(int i){} 
Tile::Tile()  //constructor of tile class
{
    player="            ";
    isOccupied=false;
    isUpgraded=false;
}
void Tile::buySettlement(string player) // constructor of buySettlement fonction
{
    this->player=player;
    isOccupied=true;
}
void Tile::upgradeSettlement() // constructor of upgradeSettlement fonction
{
    isUpgraded=true;
}
Forest::Forest(int num) // constructor of Forest class
{
    number=num;
    tileType=0;
}
string Forest::render(int i) //constructor of Forest structure
{
    stringstream s;
    switch(i){
        case 0: return ".____________.";
        
        case 1: if(number<10){
                    s<<"|Forest     "<<number<<"|";
                    return s.str();
                }
                else{
                    s<< "|Forest    "<<number<<"|";
                    return s.str();
                }
        
        case 2: if(isOccupied && isUpgraded)
                    return "|  ________  |";
                else
                    return "|            |";
        case 3: if(isOccupied && isUpgraded)
                    return "| /        \\ |";
                else if(isOccupied)
                    return"|    /''\\    |";
                else
                    return "|            |";
        case 4: if(isOccupied && isUpgraded)
                    return "| |        | |";
                else if(isOccupied)
                    return"|   |____|   |";
                else
                    return"|            |";
        
        case 5: if(isOccupied && isUpgraded)
                    return "| '--------' |";
                else
                    return "|            |";
        case 6: return"|"+player+"|";
        case 7: return ".------------.";
    }
}
Hills::Hills(int num) //Constructor of Hills class
{
    number=num;
    tileType=1;
}
string Hills::render(int i) //constructor of the Hills structure
{
    stringstream s;
    switch(i){
        case 0: return ".____________.";
        
        case 1: if(number<10){
                    s<<"|Hills      "<<number<<"|";
                    return s.str();
                }
                else{
                    s<< "|Hills     "<<number<<"|";
                    return s.str();
                }
        
        case 2: if(isOccupied && isUpgraded)
                    return "|  ________  |";
                else
                    return "|            |";
        case 3: if(isOccupied && isUpgraded)
                    return "| /        \\ |";
                else if(isOccupied)
                    return"|    /''\\    |";
                else
                    return "|            |";
        case 4: if(isOccupied && isUpgraded)
                    return "| |        | |";
                else if(isOccupied)
                    return"|   |____|   |";
                else
                    return"|            |";
        
        case 5: if(isOccupied && isUpgraded)
                    return "| '--------' |";
                else
                    return "|            |";
        case 6: return"|"+player+"|";
        case 7: return ".------------.";
    }
}
Field::Field(int num) //constructor of Filed class
{
    number=num;
    tileType=2;
}
string Field::render(int i) //constructor of Field structure
{
    stringstream s;
    switch(i){
        case 0: return ".____________.";
        
         case 1: if(number<10){
                    s<<"|Field      "<<number<<"|";
                    return s.str();
                }
                else{
                    s<< "|Field     "<<number<<"|";
                    return s.str();
                }
        
        case 2: if(isOccupied && isUpgraded)
                    return "|  ________  |";
                else
                    return "|            |";
        case 3: if(isOccupied && isUpgraded)
                    return "| /        \\ |";
                else if(isOccupied)
                    return"|    /''\\    |";
                else
                    return "|            |";
        case 4: if(isOccupied && isUpgraded)
                    return "| |        | |";
                else if(isOccupied)
                    return"|   |____|   |";
                else
                    return"|            |";
        
        case 5: if(isOccupied && isUpgraded)
                    return "| '--------' |";
                else
                    return "|            |";
        case 6: return"|"+player+"|";
        case 7: return ".------------.";
    }
}
Pasture::Pasture(int num) //constructor of Pasture class
{
    number=num;
    tileType=3;
}
string Pasture::render(int i)
{
    stringstream s;
    switch(i){
        case 0: return ".____________.";
        
         case 1: if(number<10){
                    s<<"|Pasture    "<<number<<"|";
                    return s.str();
                }
                else{
                    s<< "|Pasture   "<<number<<"|";
                    return s.str();
                }
        
        case 2: if(isOccupied && isUpgraded)
                    return "|  ________  |";
                else
                    return "|            |";
        case 3: if(isOccupied && isUpgraded)
                    return "| /        \\ |";
                else if(isOccupied)
                    return"|    /''\\    |";
                else
                    return "|            |";
        case 4: if(isOccupied && isUpgraded)
                    return "| |        | |";
                else if(isOccupied)
                    return"|   |____|   |";
                else
                    return"|            |";
        
        case 5: if(isOccupied && isUpgraded)
                    return "| '--------' |";
                else
                    return "|            |";
        case 6: return"|"+player+"|";
        case 7: return ".------------.";
    }
}
Mountain::Mountain(int num) //constructor of Montain class
{
    number=num;
    tileType=4;
}
string Mountain::render(int i) //constructor of Mountain structure
{
    stringstream s;
    switch(i){
        case 0: return ".____________.";
        
         case 1: if(number<10){
                    s<<"|Mountain   "<<number<<"|";
                    return s.str();
                }
                else{
                    s<< "|Mountain  "<<number<<"|";
                    return s.str();
                }
        
        case 2: if(isOccupied && isUpgraded)
                    return "|  ________  |";
                else
                    return "|            |";
        case 3: if(isOccupied && isUpgraded)
                    return "| /        \\ |";
                else if(isOccupied)
                    return"|    /''\\    |";
                else
                    return "|            |";
        case 4: if(isOccupied && isUpgraded)
                    return "| |        | |";
                else if(isOccupied)
                    return"|   |____|   |";
                else
                    return"|            |";
        
        case 5: if(isOccupied && isUpgraded)
                    return "| '--------' |";
                else
                    return "|            |";
        case 6: return"|"+player+"|";
        case 7: return ".------------.";
    }
}