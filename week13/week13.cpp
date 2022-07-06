#include <iostream>
#include "BFS.h"
#include "Graph.h"
using namespace std;

int main() {
    Edge zerotoone(0, 1), onetotwo(1, 2), zerotothree(0, 3), threetofour(3, 4);

    Graph test(5);
    test.add(zerotoone);
    test.add(onetotwo);
    test.add(zerotothree);
    test.add(threetofour);

    cout << test.getNumEdges() << endl << test.getNumVertices() << endl;

    BFS gTraverse(test);
    gTraverse.search(0);

    return 0;
}