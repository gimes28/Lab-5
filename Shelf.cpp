#include "Shelf.h"

Shelf::Shelf() {
    //cout << "Shelf is empty" << endl;
}
void Shelf::addGame(BoardGame newGame) {
    if (totalGames <= SIZE - 1) {
        for (int i = 0; i < SIZE; i++) {
            if (games[i].getNameGame() == "") {
                games[i] = newGame;
                totalGames++;
                break;
            }
        }
    }
    else {
        throw FullShelf(totalGames);
    }
}
BoardGame Shelf::removeGame(string removeGame) {
    BoardGame returnGame;
    if (totalGames > 0) {
        for (int i = 0; i < SIZE; ++i) {
            if(games[i].getNameGame() == removeGame){
                returnGame = games[i];
                games[i].Details();
                games[i].setNameGame("");
                cout << "\nGame has been removed\n" << endl;
                totalGames--;
                break;
            }
            else if (i == SIZE - 1) {
                cout << "Game was not found in shelf\n" << endl;
                break;
            }
        }
        return returnGame;
    }
    else {
        throw EmptyShelf(totalGames);
    }
}

void Shelf::numGames() {
    cout << "\nNumber of games: " << totalGames << "\n" << endl;
}

