
#include<iostream>
using namespace std;

class Triangle {
private:
    double side1, side2, side3;

public:

    Triangle(double a, double b, double c) {
        side1 = a;
        side2 = b;
        side3 = c;
    }

    bool isValid() {
        if(side1 + side2 > side3 && side2 + side3 > side1 && side1 + side3 > side2)
            return true;
        else
            return false;
    }

    bool isEquilateral() {
        if(side1 == side2 && side2 == side3)
            return true;
        else
            return false;
    }

    bool isIsosceles() {
        if(side1 == side2 || side2 == side3 || side1 == side3)
            return true;
        else
            return false;
    }

    bool isScalene() {
        if(side1 != side2 && side2 != side3 && side1 != side3)
            return true;
        else
            return false;
    }

    void printType() {
        if(isValid()) {
            if(isEquilateral())
                cout << "Equilateral Triangle" << endl;
            else if(isIsosceles())
                cout << "Isosceles Triangle" << endl;
            else
                cout << "Scalene Triangle" << endl;
        } else {
            cout << "Invalid Triangle" << endl;
        }
    }
};

int main() {
    double a, b, c;

    cout << "Enter side 1: ";
    cin >> a;

    cout << "Enter side 2: ";
    cin >> b;

    cout << "Enter side 3: ";
    cin >> c;

    Triangle tri(a, b, c);
    tri.printType();

    return 0;
}

