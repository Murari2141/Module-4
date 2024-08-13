#include <iostream>
using namespace std;

class Swap {
public :
    int num1, num2;

    void getNums() {
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
    }

    void display() {
        cout << "After swapping: " << endl;
        cout << "First number: " << num1 << endl;
        cout << "Second number: " << num2 << endl;
    }

    friend void swap(Swap&);
};

void swap(Swap& s) {
    s.num1 = s.num1 + s.num2;
    s.num2 = s.num1 - s.num2;
    s.num1 = s.num1 - s.num2;
}

int main() {
    Swap s;
    s.getNums();
    cout << "Before swapping: " << endl;
    cout << "First number: " << s.num1 << endl;
    cout << "Second number: " << s.num2 << endl;
    swap(s);
    s.display();
    return 0;
}
