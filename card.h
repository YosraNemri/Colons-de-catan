#ifndef CARDS_H
#define CARDS_H

#include "gamers.h"
#include <vector>
#include <ctime>
#include <iostream>
#include <cstdlib>

using namespace std;


class DevelopmentCards // Class for cards different fonctions
{   
    public: 
        void action(int, Players *playerName);
        void drawCard(Players *playerName); // gets called by int main and checks requirements
        int deckArray[20] = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5}; // array of cards
        void robberCard(Players *robber, Players *victim); // fonction when a robber card is drowed
        void stealing(Players *robber, int); // fonction with ressources stealed details
        
};


#endif