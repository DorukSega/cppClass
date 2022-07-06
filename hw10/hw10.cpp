#include <iostream>
#include "Heap.h"
#include "KeyedItem.h"
using namespace std;
int main() {
    KeyedItem myKeys[] = {6, 3, 5, 9, 2, 10};

    Heap myHeap(myKeys, 6);

    myHeap.heapDisplay();
    cout << "1th Maximum Item: " << myHeap.kthMax(1).getKey() << endl;
    cout << "3rd Maximum Item: " << myHeap.kthMax(3).getKey() << endl;

    return 1;
}