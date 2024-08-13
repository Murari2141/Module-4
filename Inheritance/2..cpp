#include<iostream>
using namespace std;

class Shape {
    public :

    int width, height;

public:
    
    Shape(int w, int h) {
        width = w;
        height = h;
    }
};

class Rectangle : public Shape {
public:
    Rectangle(int w, int h) : Shape(w, h) {}

    int area() {
        return width * height;
    }
};

int main() {
    int width, height;

    cout << "Enter rectangle width: ";
    cin >> width;

    cout << "Enter rectangle height: ";
    cin >> height;

    Rectangle rect(width, height);

    cout << "Rectangle area: " << rect.area() << endl;

    return 0;
}

