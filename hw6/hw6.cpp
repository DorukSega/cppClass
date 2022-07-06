#include <cmath>
#include <iostream>
#include "List.h"
using namespace std;

void mergeLinkedList(List& L1, List L2) {
    for (int i = 1, j = 2; i < L2.getLength() + 1; i++) {
        ListItemType a = 0;  // ListItemType refering to the type of the List
        L2.retrieve(i, a);
        L1.insert(j, a);
        j++;
        if (j <= L1.getLength())
            j++;
    }
}

void splitList(List listToSplit, List& LA, List& LB) {
    for (int i = 1, j = 1, k = 1; i < listToSplit.getLength() + 1; i++) {
        if (i % 2 == 0) {
            ListItemType a =
                0;  // ListItemType refering to the type of the List
            listToSplit.retrieve(i, a);
            LB.insert(j, a);
            j++;
        } else {
            ListItemType a =
                0;  // ListItemType refering to the type of the List
            listToSplit.retrieve(i, a);
            LA.insert(j, a);
            k++;
        }
    }
}

List addTwoList(List first, List second) {  // returns the List
    int firstAsNumber = 0, secondAsNumber = 0;

    for (int i = 1; i < first.getLength() + 1;
         i++) {  // returns first as a integer
        ListItemType a = 0;
        first.retrieve(i, a);
        firstAsNumber += pow(10, first.getLength() - i + 1) * a;
    }

    for (int i = 1; i < second.getLength() + 1; i++) {
        ListItemType a = 0;
        second.retrieve(i, a);
        secondAsNumber += pow(10, second.getLength() - i + 1) * a;
    }

    int final = firstAsNumber + secondAsNumber;  // addition

    int intSize = first.getLength() > second.getLength() ? first.getLength()
                                                         : second.getLength();
    intSize++;  // added for list

    List newList;  // list to return

    for (int i = 1; i < intSize; i++) {  // loops through integer
        newList.insert(i, (int)(final / pow(10, intSize - i)));  // inserts

        final = final - (int)(final / pow(10, intSize - i)) *
                            pow(10, intSize - i);  // removes the inserted digit
    }

    return newList;
}

int main() {
    List x, y;

    for (int i = 1, j = 5; i < 6; i++) {
        x.insert(i, j);
        j += 5;
    }

    for (int i = 1, j = 3; i < 8; i++) {
        y.insert(i, j);
        j += 3;
    }
    mergeLinkedList(x, y);
    x.display();  // custom function I wrote to display
    y.display();

    List a, b, c;
    a.insert(1, 1);
    a.insert(2, 2);
    a.insert(3, 1);
    a.insert(4, 2);
    a.insert(5, 1);
    a.display();
    splitList(a, b, c);
    b.display();
    c.display();

    List r, t;
    r.insert(1, 1);
    r.insert(2, 0);
    r.insert(3, 0);
    r.insert(4, 7);
    t.insert(1, 9);
    t.insert(2, 3);

    addTwoList(r, t).display();
    return 0;
}
