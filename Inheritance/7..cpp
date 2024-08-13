#include <iostream>
using namespace std;

class GrandParent {
public:
    GrandParent() {
        cout << "GrandParent constructor called" << endl;
    }
};

class Parent : public GrandParent {
public:
    Parent() {
        cout << "Parent constructor called" << endl;
    }
};

class Child : public Parent {
public:
    Child() {
        cout << "Child constructor called" << endl;
    }
};

int main() {
    Child obj;
    return 0;
}
