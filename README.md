![image](https://user-images.githubusercontent.com/80050807/143290880-7225b885-3074-4bb2-8160-c79d680981bb.png)

                Master in Bioinformatics with a specialization in software development and data analysis
                             
                        
                Course: Advanced programming C++


# Catan game:

This game was developed as part of an academic project and is intended for educational purpose.

We Believe that one can learn faster and more efficiently through playing ,thus we developed this catan game.
This game offers the possibility to users to not only play Settlers of catan but feed their competetive instinct.

## Steps:

1) Place the island of Catan in front of you. It consists of 25 tiles composed of Hills, Forest, Fields, Pasture and Mountains.
The challenge is to colonize this island.
2) Select the number of players desired 
3) Enter the corresponding names
4) The game is initialized and settlements are accorded randomnly
5)Ressources are intialized to 10 for each ressource and 0 vectory points (see gamers.cpp):
    this->wood = 10; 
    this->bricks = 10;
    this->grain = 10;
    this->wool = 10;
    this->ore = 10;
    this->victoryPoints=0;
6) The player is given the choice either to buy settlement, upgrade settlement, trade ressource, buy a development card or juste skip his turn.
7) For each choice there are certain conditions that must be filled ( see main.cpp ).
8) Then the next player gets to play following the same process.
9) The game continues until one player marking 10 points is declared the winner!

## Game rules:

You can have a detailed and oriented guide line to take acknowledge of the rules and how to play the Catan game through this link : https://www.regledujeu.fr/catane/

## Game launch: 

In order to be able to play the game please follow this steps: 
### 1. Clone repository:

$ git clone https://github.com/YosraNemri/Colons-de-catan

### 2. Makefile
open the folder colons-de-catan with a code editor, open terminal and tap Make

### 3. Test

You will get several files with .o extensions which are the output of compilation of cpp files.

Tap in the terminal: ./test and enjoy the game! 
