#include <iostream>
using namespace std;

class Max {
private:
    int num1, num2;

public:
    void getNums() {
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
    }

    friend int findMax(Max m);
};

int findMax(Max m) {
    return (m.num1 > m.num2) ? m.num1 : m.num2;
}

int main() {
    Max m;
    m.getNums();
    cout << "Maximum number: " << findMax(m) << endl;
    return 0;
}
