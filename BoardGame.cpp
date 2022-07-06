#include "BoardGame.h"

bool BoardGame::operator == (const BoardGame& var) {
    if (BoardGame().nameGame == var.nameGame) {
        return true;
    }
    else {
        return false;
    }
}

void BoardGame::operator = (const BoardGame& var) {
    nameGame = var.nameGame;

}

void BoardGame::Details() {
	cout << "Name of Game: " << nameGame << endl;
}