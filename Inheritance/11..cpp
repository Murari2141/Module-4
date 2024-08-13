#include <iostream>
using namespace std;

class Shape {
public:
    double circle(float radius) {
        return 3.14 * radius * radius;
    }

    double rectangle(float length, float breadth) {
        return length * breadth;
    }

    double triangle(float base, float height) {
        return 0.5 * base * height;
    }
};

int main() {
    Shape shape;
    float radius, length, breadth, base, height;

    cout << "Enter radius of circle: ";
    cin >> radius;
    cout << "Area of circle: " << shape.circle(radius) << endl;

    cout << "Enter length and breadth of rectangle: ";
    cin >> length >> breadth;
    cout << "Area of rectangle: " << shape.rectangle(length, breadth) << endl;

    cout << "Enter base and height of triangle: ";
    cin >> base >> height;
    cout << "Area of triangle: " << shape.triangle(base, height) << endl;

    return 0;
}
