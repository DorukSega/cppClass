#ifndef HASH_H_INCLUDED
#define HASH_H_INCLUDED

#include <iostream>
#include <list>
#include <vector>

using namespace std;

class HashTable {
   public:
    HashTable(const int& notFound, int type, int size = 101)
        : ITEM_NOT_FOUND(notFound), TYPE(type), theLists(size) {}

    HashTable(const HashTable& rhs)
        : ITEM_NOT_FOUND(rhs.ITEM_NOT_FOUND), theLists(rhs.theLists) {}

    const int& find(const int& x) const;

    void makeEmpty();
    void insert(const int& x);
    void remove(const int& x);

    void printTable() const;

   private:
    vector<list<int>> theLists;  // The array of lists
    const int ITEM_NOT_FOUND;
    int TYPE;
};
int hashing(int key, int tableSize, int type);
int selecting(int key, int tableSize);
int folding(int key, int tableSize);
int modular(int key, int tableSize);
#endif  // HASH_H_INCLUDED
