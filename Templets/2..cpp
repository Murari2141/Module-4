#include <iostream>
using namespace std;

template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
void bubbleSort(T arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swapValues(arr[j], arr[j + 1]);
            }
        }
    }
}

template <typename T>
void printArray(T arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int intArr[] = {64, 34, 25, 12, 22, 11, 90};
    int intSize = sizeof(intArr) / sizeof(intArr[0]);

    double dblArr[] = {3.14, 2.71, 1.62, 4.23, 0.56, 7.89};
    int dblSize = sizeof(dblArr) / sizeof(dblArr[0]);

    cout << "Before sorting (int): ";
    printArray(intArr, intSize);

    bubbleSort(intArr, intSize);

    cout << "After sorting (int): ";
    printArray(intArr, intSize);

    cout << "Before sorting (double): ";
    printArray(dblArr, dblSize);

    bubbleSort(dblArr, dblSize);

    cout << "After sorting (double): ";
    printArray(dblArr, dblSize);

    return 0;
}
