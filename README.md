![image](https://user-images.githubusercontent.com/80050807/143290880-7225b885-3074-4bb2-8160-c79d680981bb.png)

                Master in Bioinformatics with a specialization in software development and data analysis
                             
                        
                Course: Advanced programming C++


# Catan game:

This game was developed as part of an academic project and is intended for educational purpose.

We Believe that one can learn faster and more efficiently through playing ,thus we developed this catan game.
This game offers the possibility to users to not only play Settlers of catan but feed their competetive instinct.

 ![image](https://user-images.githubusercontent.com/80050807/146263401-878af726-56a0-4445-b53a-d7b4c922952d.png)


## Steps:

1) Place the island of Catan in front of you. It consists of 25 tiles composed of Hills, Forest, Fields, Pasture and Mountains.
The challenge is to colonize this island.
2) Select the number of players desired 
3) Enter the corresponding names
4) The game is initialized and settlements are accorded randomnly
5)Ressources are intialized to 10 for each ressource and 0 vectory points (see gamers.cpp):
    wood = 10; 
    bricks = 10;
    grain = 10;
    wool = 10;
    ore = 10;
    victoryPoints=0;
6) The player is given the choice either to buy settlement, upgrade settlement, trade ressource, buy a development card or juste skip his turn.
7) For each choice there are certain conditions that must be filled ( see main.cpp ).
8) Then the next player gets to play following the same process.
9) The game continues until one player marking 10 points is declared the winner!

## Game rules:

You can have a detailed and oriented guideline to take acknowledge of the rules and how to play the Catan game through this link : https://www.regledujeu.fr/catane/

## Game launch: 

In order to be able to play the game please follow this steps: 
### 1. Clone repository:

$ git clone https://github.com/YosraNemri/Colons-de-catan

### 2. Makefile
open the folder Colons-de-catan with a code editor, open terminal and tap Make

### 3. Test

You will get several files with .o extensions which are the output of compilation of cpp files.

Tap in the terminal: ./test and enjoy the game! 


## Catan game UML:

![image](https://user-images.githubusercontent.com/80050807/146262579-877ee7e0-d0e7-4e95-8e6b-99d4767af26f.png)


## Proposed topological method for board integration:

It is suggested to use the following coordinate grid to indicate the location for hexes and infrastructure objects of the players (see the figure). There are two axes, Ox and Oy, and the angle between the axes is 60∘. On the axis at an equal distance from each other, marks are plotted - integer coordinates.
The hexes are placed so that their center coordinates are integers. For example, the center of hex A is placed at point (2, 1), because the hex can be reached by taking two "right" steps from the coordinate center and one step up parallel to the Oy axis.
Intersections are uniquely specified as a coordinate and a TOP or BOTTOM value. For example, (see figure below) intersection c1 can be specified as a pair of coordinate (2, 1) and TOP value, and intersection c2 can be specified as a pair of coordinate (2, 1) and BOTTOM value.
Paths are uniquely specified by a pair of coordinates and an UP, RIGHT, or DOWN value. For example, (see figure) path p1 can be specified as a pair of coordinate (-2, 1) and value UP, path p2 can be specified as a pair of coordinate (-2, 1) and value RIGHT, and path p3 can be specified as a pair from coordinate (-2, 1) and value DOWN.

![image](https://user-images.githubusercontent.com/80050807/146261881-201577bf-fc47-4e4d-88ac-ef6fe63ae6ca.png)




