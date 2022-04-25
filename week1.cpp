#include <iostream>
using namespace std;

/* // first example
int main() {
    int a;
    cout << "Integer: ";
    cin >> a;
    switch (a) {
        case 90 ... 100:
            cout << "A";
            break;
        case 80 ... 89:
            cout << "B";
            break;
        case 70 ... 79:
            cout << "C";
            break;
        case 60 ... 69:
            cout << "D";
            break;
        case 0 ... 59:
            cout << "F";
            break;
        default:
            cout << "Invalid Input";
            break;
    }
    cout << "\n";
    return 0;
} */

/* // second example
int bigger(int a, int b) {
    if (a == b)
        return 0;
    return a > b ? a : b;
}
int main() {
    int x = 3, y = 4;
    cout << "Bigger one is: " << bigger(x, y) << "\n";
    return 0;
}
 */

/* // third example
 int boxVolume(int, int = 1, int = 1);
int main() {
    cout << boxVolume(10, 5, 2) << endl;
    cout << boxVolume(10, 5) << endl;
    cout << boxVolume(10) << endl;
    return 0;
}
int boxVolume(int W, int L, int H) {
    return W * L * H;
} */

// fourth example
void computeSumProduct(const int x, const int y, int& sum, int& product) {
    sum = x + y;
    product = x * y;
}
int main() {
    int s, p, c = 10;
    double r, t = 3.2;

    computeSumProduct(c++, c++, s, p);
    cout << s << endl << p << endl;
    return 0;
}