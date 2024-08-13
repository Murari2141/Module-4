#include <iostream>
using namespace std;

template <typename T>

void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1 = 10, num2 = 20;
    cout << "Before swap: num1 = " << num1 << ", num2 = " << num2 <<endl;

    swapValues(num1, num2);
    cout << "After swap: num1 = " << num1 << ", num2 = " << num2 <<endl;

    double dbl1 = 3.14, dbl2 = 2.71;
    cout << "Before swap: dbl1 = " << dbl1 << ", dbl2 = " << dbl2 <<endl;

    swapValues(dbl1, dbl2);

    cout << "After swap: dbl1 = " << dbl1 << ", dbl2 = " << dbl2 <<endl;

    return 0;
}
