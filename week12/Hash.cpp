// Implementation of HashTable Class for Separate Chaining

#include "Hash.h"
#include <algorithm>

/**
 * Insert item x into the hash table. If the item is
 * already present, then do nothing.
 */
void HashTable::insert(const int& x) {
    int slotNumber = hashing(x, theLists.size(), TYPE);
    list<int>& whichList = theLists[slotNumber];

    // check that item is not already in the list.
    // if not, insert it
    if (std::find(whichList.begin(), whichList.end(), x) == whichList.end())
        theLists[slotNumber].push_front(x);
}

/**
 * Remove item x from the hash table.
 */

void HashTable::remove(const int& x) {
    theLists[hashing(x, theLists.size(), TYPE)].remove(x);
}

/**
 * Find item x in the hash table.
 * Return the matching item or ITEM_NOT_FOUND if not found
 */

const int& HashTable::find(const int& x) const {
    list<int> whichList = theLists[hashing(x, theLists.size(), TYPE)];
    list<int>::iterator itr = std::find(whichList.begin(), whichList.end(), x);

    if (itr == whichList.end())
        return ITEM_NOT_FOUND;
    else
        return *itr;
}

/**
 * Display the hash table
 */
void printList(const list<int>& theList) {
    if (theList.empty())
        cout << "Empty list";
    else {
        list<int>::const_iterator itr = theList.begin();
        for (; itr != theList.end(); itr++)
            cout << *itr << " ";
    }
    cout << endl;
}

void HashTable::printTable() const {
    for (int i = 0; i < theLists.size(); i++) {
        cout << "Slot " << i << ": ";
        printList(theLists[i]);
        cout << endl;
    }
}

int keyLenght(int key) {
    int L = 0;
    for (; 0 < key; L++)
        key /= 10;
    return L;
}
/**
 * A hash function
 */
int hashing(int key, int tableSize, int type) {
    switch (type) {
        case 1:
            return selecting(key, tableSize);
            break;
        case 2:
            return folding(key, tableSize);
            break;
        case 3:
            return modular(key, tableSize);
            break;

        default:
            return selecting(key, tableSize);
            break;
    }
}

int selecting(int key, int tableSize) {  // selecting
    int final = 0;
    for (int i = 1; key != 0; i++) {
        if (i == 2)
            final += key % 10;
        else if (i == 5)
            final += 10 * (key % 10);
        key /= 10;
    }
    return final;
}

int folding(int key, int tableSize) {  // folding
    int sum = 0;
    while (key != 0) {
        sum += key % 10;
        key /= 10;
    }
    return sum;
}

int modular(int key, int tableSize) {  // mod
    return key % tableSize;
}

// end of implementation
