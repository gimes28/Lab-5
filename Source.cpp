#include <iostream>
#include "EntertainmentCollection.h"
#include "Show.h"
//#include <EntertainmentCollection>
using namespace std;

int main() {

    EntertainmentCollection<Show> collection;
    int option; // Menu Choice
    bool quit = false;
    string name;

    while (!quit) {
        cout << "Press 1 to add a show to the collection" << endl;
        cout << "Press 2 to remove a show from the collection" << endl;
        cout << "Press 3 to see how many shows are currently on the collection" << endl;
        cout << "Press 4 to quit" << endl;
        cout << "Enter option number: ";
        cin >> option;

        if (option == 1) {
            Show* newShow = new Show;
            cout << "\nEnter name of show: ";
            cin >> name;
            cout << endl;
            try {
                newShow->setTitle(name);
                collection.addItem(*newShow);
            }
            catch (EntertainmentCollection<Show>::FullCollection) {
                cout << "\nShelf is already full, game cannot be added\n" << endl;
            }
        }

        else if (option == 2) {
            cout << "\nWhich game would you like to remove?: ";
            cin >> name;
            try {
                collection.removeItem(name);
            }
            catch (EntertainmentCollection<Show>::EmptyCollection) {
                cout << "\nShelf is empty\n" << endl;
            }
        }

        else if (option == 3) {
            collection.numItems();
        }

        else if (option == 4) {
            quit = true;
        }

        else {
            cout << "Invalid Input, try again" << endl;
        }
    }
}