#ifndef BOARDGAME_H
#define BOARDGAME_H
#include <iostream>
using namespace std;

class BoardGame {
private:
    string nameGame;
public:

    //Game name getters and setters
    void setNameGame(string n) { nameGame = n; }
    string getNameGame() const { return nameGame; }

    bool operator == (const BoardGame&);
    void operator = (const BoardGame&);

    void Details();
};
#endif
