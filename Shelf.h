#ifndef SHELF_H
#define SHELF_H
#include <iostream>
#include "BoardGame.h"
using namespace std;

class Shelf {
private:
public:
    const int SIZE = 3;
    BoardGame games[3];
    int totalGames = 0;
    Shelf();
    void addGame(BoardGame newGame);
    BoardGame removeGame(string game);
    void numGames();

    //Exception Classes
    class EmptyShelf {
    private:
        int numGames;
    public:
        EmptyShelf(int gamesIn) {
            numGames = gamesIn;
        }

        int getNumGames() {
            return numGames;
        }
    };

    class FullShelf {
    private:
        int numGames;
    public:
        FullShelf(int gamesIn) {
            numGames = gamesIn;
        }

        int getNumGames() {
            return numGames;
        }
    };
};

#endif