#include <iostream>
#include "List.h"
using namespace std;
int main() {
    List myList;
    int number;
    cout << "Enter 5 Numbers: " << endl;
    for (int i = 1; i < 11; i++) {
        cin >> number;
        myList.insert(i, number);
    }
    cout << "Count: " << myList.count(2) << endl;
    return 0;
}
