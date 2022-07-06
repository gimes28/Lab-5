#ifndef ENTERTAINMENTCOLLECTION_h
#define ENTERTAINMENTCOLLECTION_h
#include <iostream>
#include "Show.h"
using namespace std;

template <class Show>

class EntertainmentCollection {
private:
    const int SIZE = 10;
    Show items[10];
    int totalItems = 0;
public:
    EntertainmentCollection();
    void addItem(Show newItem);
    Show removeItem(string removeItem);
    void numItems();

    //Exception Classes
    class EmptyCollection {
    private:
        int numItems;
    public:
        EmptyCollection(int ItemsIn) {
            numItems = ItemsIn;
        }

        int getNumItems() {
            return numItems;
        }
    };

    class FullCollection {
    private:
        int numItems;
    public:
        FullCollection(int ItemsIn) {
            numItems = ItemsIn;
        }

        int getNumItems() {
            return numItems;
        }
    };
};

#endif

template<class Show>
EntertainmentCollection<Show>::EntertainmentCollection() {
    //cout << "Shelf is empty" << endl;
}

template<class Show>
void EntertainmentCollection<Show>::addItem(Show newItem) {
    if (totalItems <= SIZE - 1) {
        for (int i = 0; i < SIZE; i++) {
            if (items[i].getTitle() == "") {
                items[i] = newItem;
                totalItems++;
                break;
            }
        }
    }
    else {
        throw FullCollection(totalItems);
    }
}

template<class Show>
Show EntertainmentCollection<Show>::removeItem(string removeItem) {
    Show returnItem;
    if (totalItems >= 0) {
        for (int i = 0; i < SIZE; ++i) {
            if (items[i].getTitle() == removeItem) {
                returnItem = items[i];
                items[i].Details();
                items[i].setTitle("");
                cout << "\nItem has been removed\n" << endl;
                totalItems--;
                break;
            }
            else if (i == SIZE - 1) {
                cout << "\nItem was not found in shelf\n" << endl;
                break;
            }
        }
        return returnItem;
    }
    else {
        throw EmptyCollection(totalItems);
    }
}

template<class Show>
void EntertainmentCollection<Show>::numItems() {
    cout << "\nNumber of item: " << totalItems << "\n" << endl;
}