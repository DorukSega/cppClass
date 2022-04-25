#include <iostream>
using namespace std;
/* first example
void swapIntegers(int& i1, int& i2) {
    const int temp = i1;
    i1 = i2;
    i2 = temp;
}
void swapIntegerPointers(int* p1, int* p2) {
    const int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
int main() {
    int a = 1, b = 2, *c = &a, *d = &b;

    swapIntegers(a, b);

    cout << a << endl << b << endl;

    swapIntegerPointers(c, d);

    cout << *c << endl << *d << endl;

    return 0;
}*/

/* second example
#define SIZE 7
void replace(int arr[], int size, int value) {
    int temp = arr[value];
    for (int i = value; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[size - 1] = temp;
}

void partition(int arr[], int arrSize, int pivot) {
    int first = arrSize;
    for (int i = 0; i < arrSize; i++)
        for (int j = 0; j < arrSize; j++)
            if (arr[j] > pivot) {
                replace(arr, SIZE, j);
                if (j < first)
                    first == j - 1;
            };
}

void printArray(int arr[], int size) {
    cout << endl << "Array: " << endl;
    for (int i = 0; i < size; i++)
        cout << arr[i] << endl;
    cout << endl;
}

int main(void) {
    int arr[SIZE] = {1, 5, 7, 3, 8, 9, 4};
    printArray(arr, SIZE);
    partition(arr, SIZE, 4);
    printArray(arr, SIZE);
    return 0;
}*/
