#ifndef VIDEOGAME_H
#define VIDEOGAME_H
#include <iostream>
using namespace std;

class VideoGame {
protected:
    //Protected so that all derived classes can access
    string videoGameName;
public:
    // Videogame getters and setters
    string getVideoGame() const{ return videoGameName; }
    void setVideoGame(string n) { videoGameName = n; }

    void Details();
};
#endif