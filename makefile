CC = g++
CFLAG = -std=c++11
test: main.o card.o gamers.o boardStructure.o
	$(CC) main.o boardStructure.o card.o gamers.o -o test

main.o: main.cpp card.h board.h gamers.h
	$(CC) -c main.cpp $(CFLAG)

boardStructure.o: boardStructure.cpp board.h
	$(CC) -c boardStructure.cpp $(CFLAG)

card.o: card.cpp card.h gamers.h
	$(CC) -c card.cpp $(CFLAG)

gamers.o: gamers.cpp gamers.h
	$(CC) -c gamers.cpp $(CFLAG)

clean:
	rm *.o test