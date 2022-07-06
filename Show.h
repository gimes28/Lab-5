
#ifndef SHOW_H
#define SHOW_H
#include <iostream>
using namespace std;

class Show {
protected:
    //Protected so that all derived classes can access
    string Title;
public:
    // Constructors
    Show();
    Show(string name);

    // Title getters and setters
    string getTitle() const { return Title; };
    void setTitle(string name) { Title = name; };

    //virtual void Play();
    void Details();
};

#endif