#include "Hash.h"
int main() {
    HashTable selectingH(11, 1, 100);
    selectingH.insert(123456);
    selectingH.insert(324537);
    selectingH.printTable();

    HashTable foldingH(11, 2, 82);
    foldingH.insert(123456);
    foldingH.insert(324537);
    foldingH.printTable();

    HashTable modularH(11, 3, 97);
    modularH.insert(123456);
    modularH.insert(324537);
    modularH.printTable();
    return 0;
}