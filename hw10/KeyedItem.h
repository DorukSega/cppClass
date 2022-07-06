#ifndef KEYEDITEM_H_INCLUDED
#define KEYEDITEM_H_INCLUDED

#include <string>
using namespace std;

typedef int KeyType;

class KeyedItem {
   public:
    KeyedItem(){};
    KeyedItem(const KeyType& keyValue) : searchKey(keyValue) {}
    KeyType getKey() const { return searchKey; }  // end getKey
   private:
    KeyType searchKey;
};  // end class

#endif  // KEYEDITEM_H_INCLUDED
